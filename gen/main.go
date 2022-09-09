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
	Classes   []Classification
}

type Classification struct {
	Tests    string
	Neovim   string
	Helix    string
	Bindings []bass.Symbol
}

func (cls Classification) String() string {
	return fmt.Sprintf("@%s %s", cls.Highlight(), cls.Matcher())
}

func (cls Classification) Highlight() string {
	hl := cls.Tests
	if isNeovim && cls.Neovim != "" {
		hl = cls.Neovim
	} else if isHelix && cls.Helix != "" {
		hl = cls.Helix
	}
	return hl
}

func (cls Classification) Matcher() string {
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

	tmpl, err := template.New("stdin").Funcs(template.FuncMap{
		"list":   formatList,
		"commas": commaList,
	}).Parse(string(content))
	if err != nil {
		log.Fatalf("parse template: %s", err)
	}

	var classes []Classification
	for _, class := range hl.Classify(scope) {
		switch class.Class {
		case hl.Cond:
			classes = append(classes, Classification{
				Tests:    "conditional",
				Neovim:   "conditional",
				Helix:    "keyword.control.conditional",
				Bindings: class.Bindings,
			})
		case hl.Def:
			classes = append(classes, Classification{
				Tests:    "define",
				Neovim:   "define",
				Helix:    "keyword.control.storage",
				Bindings: class.Bindings,
			})
		case hl.Fn:
			classes = append(classes, Classification{
				Tests:    "function.builtin",
				Neovim:   "function.builtin",
				Helix:    "function.builtin",
				Bindings: class.Bindings,
			})
		case hl.Op:
			classes = append(classes, Classification{
				Tests:    "function.macro",
				Neovim:   "function.macro",
				Helix:    "function.macro",
				Bindings: class.Bindings,
			})
		case hl.Special:
			classes = append(classes, Classification{
				Tests:    "keyword.builtin",
				Neovim:   "keyword.builtin",
				Helix:    "keyword.builtin",
				Bindings: class.Bindings,
			})
		case hl.Repeat:
			classes = append(classes, Classification{
				Tests:    "repeat",
				Neovim:   "repeat",
				Helix:    "keyword.control.repeat",
				Bindings: class.Bindings,
			})
		case hl.Import:
			classes = append(classes, Classification{
				Tests:    "include",
				Neovim:   "include",
				Helix:    "keyword.control.import",
				Bindings: class.Bindings,
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

func queryMatch(class Classification) string {
	strs := make([]string, len(class.Bindings))
	for i := range class.Bindings {
		strs[i] = regexp.QuoteMeta(string(class.Bindings[i]))
	}

	return fmt.Sprintf(
		`(#match? @%s %q)`,
		class.Highlight(),
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
		class.Highlight(),
		strings.Join(strs, " "),
	)
}
