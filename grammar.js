const NEWLINE = /\r?\n/;

module.exports = grammar({
  name: "env",

  extras: ($) => [$.comment, /\s/],

  rules: {
    source_file: ($) => repeat(choice($.comment, $.variable)),

    comment: ($) => token(seq("#", /.*/)),

    variable: ($) =>
      seq(field("name", $.identifier), "=", optional(field("value", $.value))),

    interpolated_variable: ($) => seq("$", $.identifier),

    identifier: ($) => /[A-Z][0-9a-zA-Z_]*/,

    value: ($) =>
      choice(
        $.string_interpolated,
        $.string_literal,
        $.bool,
        $.integer,
        $.raw_value,
      ),

    bool: ($) => choice("true", "false"),

    integer: ($) => /\d+/,

    string_interpolated: ($) =>
      seq('"', repeat(choice($._interpolated_content, $.escape_sequence)), '"'),

    _interpolated_content: ($) => choice(/[^"$\\]+/, $.interpolated_variable),

    string_literal: ($) =>
      seq("'", repeat(choice(/[^'\\]+/, $.escape_sequence)), "'"),

    escape_sequence: ($) => token(seq("\\", /[nrtfb"'\$\\]/)),

    raw_value: ($) => token(prec(-1, /[^#=\n]+/)),
  },
});
