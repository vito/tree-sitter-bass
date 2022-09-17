targets=queries/highlights.scm queries/highlights.scm.nvim queries/highlights.scm.hx

.PHONY: all

all: $(targets)

queries/highlights.scm: queries/highlights.scm.tmpl gen/main.go go.mod go.sum
	go run ./gen < $< > $@

queries/highlights.scm.nvim: queries/highlights.scm.tmpl gen/main.go go.mod go.sum
	env NEOVIM=1 go run ./gen < $< > $@

queries/highlights.scm.hx: queries/highlights.scm.tmpl gen/main.go go.mod go.sum
	env HELIX=1 go run ./gen < $< > $@

clean:
	rm -f $(targets)

install:
	cp ./queries/highlights.scm.nvim ../bass.vim/queries/bass/highlights.scm
	cp ./queries/highlights.scm.hx ../helix/runtime/queries/bass/highlights.scm
