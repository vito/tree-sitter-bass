; GENERATED VIA https://github.com/vito/tree-sitter-bass

(comment) @comment.line

["(" ")" "[" "]" "{" "}"] @punctuation.bracket

[(ignore) (null) (bool)] @constant.builtin

(int) @number

(string (string_escape) @string.escape)

(string) @string

[(command) (path) (relpath)] @namespace

(keyword) @string.special.symbol


;;; generic queries first

; first symbol in a list form is a combiner call
(list . (symbol) @function)

; highlight symbols as vars only when they're clearly vars
(cons (symbol) @variable)
(scope (symbol) @variable)
(subpath form: (symbol) @variable)
(subbind form: (symbol) @variable)

;;; specific queries supercede generic ones

;; classification based highlighting

(list . (symbol) @conditional (#any-of? @conditional "if" "case" "cond" "when"))
(cons . (symbol) @conditional (#any-of? @conditional "if" "case" "cond" "when"))

(list . (symbol) @repeat (#any-of? @repeat "each"))
(cons . (symbol) @repeat (#any-of? @repeat "each"))

(list . (symbol) @define (#any-of? @define "def" "defop" "defn"))
(cons . (symbol) @define (#any-of? @define "def" "defop" "defn"))

(list . (symbol) @function.builtin (#any-of? @function.builtin "dump" "mkfs" "json" "log" "error" "now" "cons" "wrap" "unwrap" "eval" "make-scope" "bind" "meta" "with-meta" "null?" "ignore?" "boolean?" "number?" "string?" "symbol?" "scope?" "sink?" "source?" "list?" "pair?" "applicative?" "operative?" "combiner?" "path?" "empty?" "thunk?" "+" "*" "quot" "-" "max" "min" "=" ">" ">=" "<" "<=" "list->source" "across" "emit" "next" "reduce-kv" "assoc" "symbol->string" "string->symbol" "str" "substring" "trim" "scope->list" "string->fs-path" "string->cmd-path" "string->dir" "subpath" "path-name" "path-stem" "with-image" "with-dir" "with-args" "with-cmd" "with-stdin" "with-env" "with-insecure" "with-label" "with-port" "with-tls" "with-mount" "thunk-cmd" "thunk-args" "resolve" "start" "addr" "wait" "read" "cache-dir" "binds?" "recall-memo" "store-memo" "mask" "list" "list*" "first" "rest" "length" "second" "third" "map" "map-pairs" "foldr" "foldl" "append" "filter" "conj" "list->scope" "merge" "apply" "id" "always" "vals" "keys" "memo" "succeeds?" "run" "last" "take" "take-all" "insecure!" "from" "cd" "wrap-cmd" "mkfile" "path-base" "not"))
(cons . (symbol) @function.builtin (#any-of? @function.builtin "dump" "mkfs" "json" "log" "error" "now" "cons" "wrap" "unwrap" "eval" "make-scope" "bind" "meta" "with-meta" "null?" "ignore?" "boolean?" "number?" "string?" "symbol?" "scope?" "sink?" "source?" "list?" "pair?" "applicative?" "operative?" "combiner?" "path?" "empty?" "thunk?" "+" "*" "quot" "-" "max" "min" "=" ">" ">=" "<" "<=" "list->source" "across" "emit" "next" "reduce-kv" "assoc" "symbol->string" "string->symbol" "str" "substring" "trim" "scope->list" "string->fs-path" "string->cmd-path" "string->dir" "subpath" "path-name" "path-stem" "with-image" "with-dir" "with-args" "with-cmd" "with-stdin" "with-env" "with-insecure" "with-label" "with-port" "with-tls" "with-mount" "thunk-cmd" "thunk-args" "resolve" "start" "addr" "wait" "read" "cache-dir" "binds?" "recall-memo" "store-memo" "mask" "list" "list*" "first" "rest" "length" "second" "third" "map" "map-pairs" "foldr" "foldl" "append" "filter" "conj" "list->scope" "merge" "apply" "id" "always" "vals" "keys" "memo" "succeeds?" "run" "last" "take" "take-all" "insecure!" "from" "cd" "wrap-cmd" "mkfile" "path-base" "not"))

(list . (symbol) @function.macro (#any-of? @function.macro "op" "fn" "current-scope" "quote" "let" "provide" "module" "or" "and" "->" "curryfn" "for" "$" "linux"))
(cons . (symbol) @function.macro (#any-of? @function.macro "op" "fn" "current-scope" "quote" "let" "provide" "module" "or" "and" "->" "curryfn" "for" "$" "linux"))

(list . (symbol) @keyword.builtin (#any-of? @keyword.builtin "do" "doc"))
(cons . (symbol) @keyword.builtin (#any-of? @keyword.builtin "do" "doc"))

(list . (symbol) @include (#any-of? @include "use" "import" "load"))
(cons . (symbol) @include (#any-of? @include "use" "import" "load"))


;; special cases

; [a & b] highlights & as operator rather than a regular symbol
(list (symbol) @operator (#match? @operator "&"))
(cons (symbol) @operator (#match? @operator "&"))

; (-> x y z) highlights first x as var, y z as function
(list
  .
  (symbol) @function.macro
  (#eq? @function.macro "->")
  .
  (symbol) @variable.parameter
  (symbol) @function)

; (-> 42 x y) highlights 42 as regular number
(list
  .
  (symbol) @function.macro
  (#eq? @function.macro "->")
  .
  (_)
  (symbol) @function)

