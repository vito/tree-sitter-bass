package main

import (
	"bytes"
	"encoding/json"
	"fmt"
	"io"
	"log"
	"os"
	"regexp"
	"strings"
	"text/template"

	"github.com/vito/bass/pkg/bass"
	"github.com/vito/bass/pkg/hl"
)

var isNeovim = os.Getenv("NEOVIM") != ""
var isHelix = os.Getenv("HELIX") != ""

type BassHL struct {
	LispWords []bass.Symbol
	Classes   []Match
	IsHelix   bool
	IsNeovim  bool
}

type Match struct {
	Highlight string
	Bindings  []bass.Symbol
}

func (cls Match) String() string {
	if isNeovim {
		return queryAnyOf(cls)
	} else {
		return queryMatch(cls)
	}
}

func main() {
	scope := bass.NewStandardScope()

	content, err := io.ReadAll(os.Stdin)
	if err != nil {
		log.Fatalf("read template: %s", err)
	}

	classes := hl.Classify(scope)

	tmpl, err := template.New("stdin").Funcs(template.FuncMap{
		"list":   formatList,
		"commas": commaList,
		"match": func(hl, className string) (string, error) {
			for _, class := range classes {
				if class.Class.String() == className {
					return Match{
						Highlight: hl,
						Bindings:  class.Bindings,
					}.String(), nil
				}
			}
			return "", fmt.Errorf("unknown class: %s", className)
		},
		"hl": func(test, nvim, helix string) string {
			if isNeovim {
				return nvim
			} else if isHelix {
				return helix
			} else {
				return test
			}
		},
	}).Parse(string(content))
	if err != nil {
		log.Fatalf("parse template: %s", err)
	}

	err = tmpl.Execute(os.Stdout, BassHL{
		LispWords: hl.LispWords(scope),
	})
	if err != nil {
		log.Fatalf("execute template: %s", err)
	}
}

func formatList(names []bass.Symbol) string {
	buf := new(bytes.Buffer)

	// JSON is a good enough approximation for a Vim list since these should all
	// be simple strings
	enc := json.NewEncoder(buf)
	enc.SetEscapeHTML(false) // don't escape names like ->
	enc.Encode(names)

	return buf.String()
}

func commaList(names []bass.Symbol) string {
	strs := make([]string, len(names))
	for i := range names {
		strs[i] = string(names[i])
	}

	return strings.Join(strs, ",")
}

func queryMatch(class Match) string {
	strs := make([]string, len(class.Bindings))
	for i := range class.Bindings {
		strs[i] = regexp.QuoteMeta(string(class.Bindings[i]))
	}

	return fmt.Sprintf(
		`(#match? %s %q)`,
		class.Highlight,
		"^("+strings.Join(strs, "|")+")$",
	)
}

func queryAnyOf(class Match) string {
	strs := make([]string, len(class.Bindings))
	for i := range class.Bindings {
		strs[i] = fmt.Sprintf("%q", class.Bindings[i])
	}

	return fmt.Sprintf(
		`(#any-of? %s %s)`,
		class.Highlight,
		strings.Join(strs, " "),
	)
}
