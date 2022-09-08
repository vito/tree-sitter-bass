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

type BassHL struct {
	LispWords []bass.Symbol
	Classes   []Classification
}

type Classification struct {
	Highlight string
	Bindings  []bass.Symbol
}

func main() {
	scope := bass.NewStandardScope()

	content, err := io.ReadAll(os.Stdin)
	if err != nil {
		log.Fatalf("read template: %s", err)
	}

	tmpl, err := template.New("stdin").Funcs(template.FuncMap{
		"list":   formatList,
		"commas": commaList,
		"match":  match,
	}).Parse(string(content))
	if err != nil {
		log.Fatalf("parse template: %s", err)
	}

	var classes []Classification
	for _, class := range hl.Classify(scope) {
		switch class.Class {
		case hl.Cond:
			classes = append(classes, Classification{
				Highlight: "conditional",
				Bindings:  class.Bindings,
			})
		case hl.Def:
			classes = append(classes, Classification{
				Highlight: "define",
				Bindings:  class.Bindings,
			})
		case hl.Fn:
			classes = append(classes, Classification{
				Highlight: "function.builtin",
				Bindings:  class.Bindings,
			})
		case hl.Op:
			classes = append(classes, Classification{
				Highlight: "function.macro",
				Bindings:  class.Bindings,
			})
		case hl.Special:
			classes = append(classes, Classification{
				Highlight: "keyword.builtin",
				Bindings:  class.Bindings,
			})
		case hl.Var:
			// XXX: nothing does this atm?
		}
	}

	err = tmpl.Execute(os.Stdout, BassHL{
		LispWords: hl.LispWords(scope),
		Classes:   classes,
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

func match(class Classification) string {
	if os.Getenv("NEOVIM") != "" {
		return queryAnyOf(class)
	} else {
		return queryMatch(class)
	}
}

func queryMatch(class Classification) string {
	strs := make([]string, len(class.Bindings))
	for i := range class.Bindings {
		strs[i] = regexp.QuoteMeta(string(class.Bindings[i]))
	}

	return fmt.Sprintf(
		`(#match? @%s %q)`,
		class.Highlight,
		"^("+strings.Join(strs, "|")+")$",
	)
}

func queryAnyOf(class Classification) string {
	strs := make([]string, len(class.Bindings))
	for i := range class.Bindings {
		strs[i] = fmt.Sprintf("%q", class.Bindings[i])
	}

	return fmt.Sprintf(
		`(#any-of? @%s %s)`,
		class.Highlight,
		strings.Join(strs, " "),
	)
}
