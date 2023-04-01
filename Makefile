targets=queries/nvim/highlights.scm queries/helix/highlights.scm

.PHONY: all clean install

all: $(targets)

queries/nvim/highlights.scm: queries/nvim/highlights.scm.tmpl gen/main.go go.mod go.sum
	env NEOVIM=1 go run ./gen < $< > $@

queries/helix/highlights.scm: queries/helix/highlights.scm.tmpl gen/main.go go.mod go.sum
	env HELIX=1 go run ./gen < $< > $@

clean:
	rm -f $(targets)

install:
	cp ./queries/nvim/*.scm ../bass.vim/queries/bass/
	cp ./queries/helix/*.scm ../helix/runtime/queries/bass/
