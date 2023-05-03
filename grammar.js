module.exports = grammar({
  name: 'json_prefix',

  extras: $ => [
    /\s/,
  ],

  supertypes: $ => [
    $._value,
    $._prefix_value
  ],

  conflicts: $ => [
    [$._value, $._prefix_value],
    [$.object, $.prefix_object],
    [$.array, $.prefix_array],
    [$.pair, $.prefix_pair],
    [$.string, $.prefix_string],
    [$.number, $.prefix_number],
    [$.true, $.prefix_true],
    [$.false, $.prefix_false],
    [$.null, $.prefix_null],
  ],

  rules: {
    document: $ => choice($._value, $._prefix_value),

    _value: $ => choice(
      $.object,
      $.array,
      $.number,
      $.string,
      $.true,
      $.false,
      $.null
    ),

    _prefix_value: $ => choice(
      $.prefix_object,
      $.prefix_array,
      $.prefix_number,
      $.prefix_string,
      $.prefix_true,
      $.prefix_false,
      $.prefix_null
    ),

    object: $ => seq(
      "{", comma_sep($.pair), "}"
    ),

    prefix_object: $ => choice(
      "{",
      seq("{", choice($.prefix_pair, seq($.pair, optional($.trailing_comma)))),
      seq("{", repeat1(seq($.pair, ",")), choice(seq($.pair, optional($.trailing_comma)), $.prefix_pair)),
    ),

    pair: $ => seq(
      field("key", $.string),
      ":",
      field("value", $._value)
    ),

    prefix_pair: $ => choice(
      field("key", choice($.prefix_string, $.string)),
      seq(field("key", $.string), ":"),
      seq(field("key", $.string), ":", field("value", $._prefix_value)),
    ),

    array: $ => seq(
      "[", comma_sep($._value), "]"
    ),

    prefix_array: $ => choice(
      "[",
      seq("[", $._prefix_value),
      seq("[", $._value),
      seq("[", $._value, $.trailing_comma),
      seq("[", repeat1(seq($._value, ",")), choice(seq($._value, optional($.trailing_comma)), $._prefix_value)),
    ),

    string: $ => choice(
      seq('"', '"'),
      seq('"', $.string_content, '"')
    ),

    prefix_string: $ => choice(
      '"',
      seq('"', $.string_content),
    ),

    string_content: $ => repeat1(choice(
      token.immediate(prec(1, /[^\\"\n]+/)),
      $.escape_sequence
    )),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      /(\"|\\|\/|b|f|n|r|t|u)/
    )),

    number: $ => {
      return token(
        seq(
          optional('-'),
          choice(
            '0',
            seq(/[1-9]/, optional(/\d+/))
          ),
          optional(
            seq('.', repeat1(/\d/))
          ),
          optional(
            seq(choice('e', 'E'), optional(choice('+', '-')), repeat1(/\d/))
          )
        ),
      )
    },

    prefix_number: $ => {
      const sign = optional("-")
      const digits = choice(
        '0',
        seq(/[1-9]/, optional(/\d+/))
      )
      const decimals = optional(seq('.', repeat1(/\d/)))
      return token(
        choice(
          seq(sign, digits),
          seq(sign, digits, optional(".")),
          seq(sign, digits, decimals),
          seq(sign, digits, decimals, optional(choice('e', 'E'))),
          seq(sign, digits, decimals, optional(seq(choice('e', 'E'), optional(choice('+', '-')))))
        )
      )
    },

    trailing_comma: $ => ",",

    true: $ => "true",

    prefix_true: $ => /t|tr|tru/,

    false: $ => "false",

    prefix_false: $ => /f|fa|fal|fals/,

    null: $ => "null",

    prefix_null: $ => /n|nu|nul/,
  }
});

function comma_sep_1(rule) {
  return seq(rule, repeat(seq(",", rule)))
}

function comma_sep(rule) {
  return optional(comma_sep_1(rule))
}