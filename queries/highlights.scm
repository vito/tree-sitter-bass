; NOTE: tree-sitter test and neovim disagree on precedence/priority.
;
; the tests desire more specific highlights to be declared first, whereas for
; neovim this would mean applying their highlights *over* the more specific
; ones.
;
; to meet in the middle, this query favors the tests and manually sets
; precedence where needed to appease neovim.

(comment) @comment.line

["(" ")" "[" "]" "{" "}"] @punctuation.bracket

[(ignore) (null) (bool)] @constant.language

(int) @constant.numeric @number

(string (string_escape) @constant.character.escape) @string

(string) @string

[(command) (path) (relpath)] @namespace

(keyword) @constant.other

(
  (list
    .
    (symbol) @keyword.control.import
    (#match? @keyword.control.import "^(use|import)$"))
  (set! "priority" 105)
)

(
  (cons
    .
    (symbol) @keyword.control.import
    (#match? @keyword.control.import "^(use|import)$"))
  (set! "priority" 105)
)


(
  (list
    .
    (symbol) @conditional
    (#match? @conditional "^(case|cond|when)$"))
  (set! "priority" 105)
)
(
  (cons
    .
    (symbol) @conditional
    (#match? @conditional "^(case|cond|when)$"))
  (set! "priority" 105)
)

(
  (list
    .
    (symbol) @define
    (#match? @define "^(def|defop|defn)$"))
  (set! "priority" 105)
)
(
  (cons
    .
    (symbol) @define
    (#match? @define "^(def|defop|defn)$"))
  (set! "priority" 105)
)

(
  (list
    .
    (symbol) @function.builtin
    (#match? @function.builtin "^(dump|mkfs|json|log|error|now|cons|wrap|unwrap|eval|make-scope|bind|meta|with-meta|null\\?|ignore\\?|boolean\\?|number\\?|string\\?|symbol\\?|scope\\?|sink\\?|source\\?|list\\?|pair\\?|applicative\\?|operative\\?|combiner\\?|path\\?|empty\\?|thunk\\?|\\+|\\*|quot|-|max|min|=|>|>=|<|<=|list->source|across|emit|next|reduce-kv|assoc|symbol->string|string->symbol|str|substring|trim|scope->list|string->fs-path|string->cmd-path|string->dir|subpath|path-name|path-stem|with-image|with-dir|with-args|with-cmd|with-stdin|with-env|with-insecure|with-label|with-port|with-tls|with-mount|thunk-cmd|thunk-args|load|resolve|start|addr|wait|read|cache-dir|binds\\?|recall-memo|store-memo|mask|list|list\\*|first|rest|length|second|third|map|map-pairs|foldr|foldl|append|filter|conj|list->scope|merge|apply|id|always|vals|keys|memo|succeeds\\?|run|last|take|insecure!|from|cd|wrap-cmd|mkfile|path-base|not)$"))
  (set! "priority" 105)
)
(
  (cons
    .
    (symbol) @function.builtin
    (#match? @function.builtin "^(dump|mkfs|json|log|error|now|cons|wrap|unwrap|eval|make-scope|bind|meta|with-meta|null\\?|ignore\\?|boolean\\?|number\\?|string\\?|symbol\\?|scope\\?|sink\\?|source\\?|list\\?|pair\\?|applicative\\?|operative\\?|combiner\\?|path\\?|empty\\?|thunk\\?|\\+|\\*|quot|-|max|min|=|>|>=|<|<=|list->source|across|emit|next|reduce-kv|assoc|symbol->string|string->symbol|str|substring|trim|scope->list|string->fs-path|string->cmd-path|string->dir|subpath|path-name|path-stem|with-image|with-dir|with-args|with-cmd|with-stdin|with-env|with-insecure|with-label|with-port|with-tls|with-mount|thunk-cmd|thunk-args|load|resolve|start|addr|wait|read|cache-dir|binds\\?|recall-memo|store-memo|mask|list|list\\*|first|rest|length|second|third|map|map-pairs|foldr|foldl|append|filter|conj|list->scope|merge|apply|id|always|vals|keys|memo|succeeds\\?|run|last|take|insecure!|from|cd|wrap-cmd|mkfile|path-base|not)$"))
  (set! "priority" 105)
)

(
  (list
    .
    (symbol) @function.macro
    (#match? @function.macro "^(op|fn|current-scope|quote|let|import|provide|module|use|or|and|->|curryfn|for|\\$|linux)$"))
  (set! "priority" 105)
)
(
  (cons
    .
    (symbol) @function.macro
    (#match? @function.macro "^(op|fn|current-scope|quote|let|import|provide|module|use|or|and|->|curryfn|for|\\$|linux)$"))
  (set! "priority" 105)
)

(
  (list
    .
    (symbol) @keyword.builtin
    (#match? @keyword.builtin "^(if|do|doc)$"))
  (set! "priority" 105)
)
(
  (cons
    .
    (symbol) @keyword.builtin
    (#match? @keyword.builtin "^(if|do|doc)$"))
  (set! "priority" 105)
)


(
  (list
    (symbol) @keyword.operator
    (#match? @keyword.operator "&"))
  (set! "priority" 105)
)

(
  (cons
    (symbol) @keyword.operator
    (#match? @keyword.operator "&"))
  (set! "priority" 105)
)

(
  (list .
        (symbol) @function.macro
        (#eq? @function.macro "->")
        .
        (symbol) @variable.parameter
        (symbol) @function)
  (set! "priority" 105)
)

(
  (list .
        (symbol) @function.macro
        (#eq? @function.macro "->")
        .
        (_)
        (symbol) @function)
  (set! "priority" 105)
)

; first symbol in a list form is a combiner call
(list . (symbol) @function)

; be conservative; we don't want to just call every single symbol a variable
(cons (symbol) @variable)
(scope (symbol) @variable)
(subpath form: (symbol) @variable)
(subbind form: (symbol) @variable)
