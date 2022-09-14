# tree-sitter-bass

> A Bass grammar for [Tree-sitter](https://tree-sitter.github.io).

## generating `highlights.scm`

prerequisites: `go`, `make`

```sh
make
```

This will generate the following files:

* `queries/highlights.scm` - a set of highlight queries suitable for `tree-sitter test`
* `queries/highlights.scm.nvim` - suitable for [Neovim] highlighting
* `queries/highlights.scm.nvim` - suitable for [Helix] highlighting

### a quick note on precedence

`tree-sitter test`, Helix, and Neovim disagree on the precedence for
overlapping queries.

With `tree-sitter test` and Helix, the first matching query takes perecedence,
whereas in Neovim the last matching query supersedes the ones before it.

To handle this the query template just conditionally switches the order of
the queries.

[Tree-sitter]: https://tree-sitter.github.io/tree-sitter
[Neovim]: https://github.com/neovim/neovim
[Helix]: https://github.com/helix-editor/helix
