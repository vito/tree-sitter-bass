(comment) @comment
["(" ")" "[" "]" "{" "}"] @punctuation.bracket

(int) @number

(string (string_escape) @escape) @string
(string) @string

[(ignore) (null) (bool)] @constant.builtin

(keyword) @constant

(list
  ((symbol) @operator
   (#match? @operator "&")))

(cons
  ((symbol) @operator
   (#match? @operator "&")))

(list . (symbol) @function)

[(command) (path) (relpath)] @string.special.path

(symbol) @variable
