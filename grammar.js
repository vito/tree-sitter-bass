const PREC = {
  PATH: 10, // foo/bar
  BIND: 5, // foo:bar
};

const SYMBOL_HEAD =
  /[^\t\n\v\f\r \u0085\u00A0,()\[\]{};^/:.0-9]/;

const SYMBOL_TAIL =
  choice(SYMBOL_HEAD, /[.0-9]/);

const SYMBOL =
  token(seq(SYMBOL_HEAD, repeat(SYMBOL_TAIL)));

const SUBPATH =
  repeat1(seq("/", optional(SYMBOL)));

module.exports = grammar({
  name: 'bass',

  rules: {
    source: $ =>
      repeat(choice($._form, $._gap)),

    _gap: $ =>
      choice($._ws, $.comment),

    _ws: _ =>
      // Latin-1 spaces should cover it in practice, + comma
      token(repeat1(/[\t\n\v\f\r \u0085\u00A0,]/)),

    comment: _ =>
      token(/(;|#!).*\n?/),

    _form: $ =>
      choice(
        // scalars
        $.int,
        $.string,
        $.ignore,
        $.null,
        $.bool,
        $.symbol,
        $.keyword,
        // collections
        $.list,
        $.cons,
        $.scope,
        // paths
        $.command,
        $.path,
        $.subpath,
        $.subbind,
        // meta
        $.meta,
      ),

    int: _ =>
      token(prec(10, seq(optional(/[+-]/), repeat1(/[0-9]/)))),

    keyword: _ =>
      token(seq(":", SYMBOL)),

    string: _ =>
      token(
        seq('"',
          repeat(/[^"\\]/),
          repeat(
            seq(
              "\\",
              /["n\\tafrbv]/,
              repeat(/[^"\\]/),
            ),
          ),
          '"'),
      ),

    ignore: _ =>
      token('_'),

    null: _ =>
      token('null'),

    bool: _ =>
      token(choice('false', 'true')),

    symbol: _ =>
      SYMBOL,

    command: _ =>
      token(seq(".", SYMBOL)),

    path: _ =>
      token(seq(".", SUBPATH)),

    _subpath: _ =>
      token(SUBPATH),

    subpath: $ =>
      prec.left(
        PREC.PATH,
        seq(field("form", choice($.symbol, $.subbind)), field("subpath", $._subpath)),
      ),

    subbind: $ =>
      prec.left(
        PREC.BIND,
        seq(
          field("form", choice($.symbol, $.subbind)),
          field("keyword", $.keyword),
        ),
      ),

    meta: $ =>
      seq(
        field('marker', "^"),
        repeat($._gap),
        field('meta', $._form),
        repeat($._gap),
        field('form', $._form),
      ),

    list: $ =>
      seq(
        field('open', "("),
        repeat(choice(field('value', $._form),
          $._gap)),
        field('close', ")"),
      ),

    scope: $ =>
      seq(
        field('open', "{"),
        repeat(choice(field('value', $._form),
          $._gap)),
        field('close', "}"),
      ),

    cons: $ =>
      seq(
        field('open', "["),
        repeat(choice(field('value', $._form),
          $._gap)),
        field('close', "]"),
      ),
  }
});
