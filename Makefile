targets=queries/highlights.scm queries/highlights.scm.nvim

.PHONY: all

all: $(targets)

queries/highlights.scm: queries/highlights.scm.tmpl gen/main.go go.mod go.sum
	go run ./gen < $< > $@

queries/highlights.scm.nvim: queries/highlights.scm.tmpl gen/main.go go.mod go.sum
	env NEOVIM=1 go run ./gen < $< > $@

clean:
	rm -f $(targets)
