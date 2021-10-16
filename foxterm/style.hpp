#pragma once
#include <string>

namespace Foxterm {
// Codes for formating text using ANSI, work on every terminal out there
enum class Style {
  // resets everything
  reset = 0,
  // increases intensity
  bold = 1,
  // decreases intensity
  dim = 2,
  // Not widely supported, sometimes interpreted as inverse or blink
  italic = 3,
  // swap foreground and background colors
  invert = 7,
  // disables bold and dim
  disable_bold_dim = 22,
  // disables the italic modifier
  disable_italic = 23,
  // disables invert
  disable_invert = 27,
};

// Codes for formating text using ANSI, work on most terminals out there
enum class Style_extra {
  underline = 4,
  // hides the text, not widely supported
  hide = 8,
  // crossing out text
  strike = 9,
  // underlines text twice, sometimes just disables bold
  underline_double = 21,
  // disable underline and double_underline modifier
  disable_underline = 24,
  // reveals text with the hidden modifier
  reveal = 28,
  // disables crossed out
  dissable_strike = 29,
};

// Codes for formating text using ANSI, work barely on terminals but are
// specified by the ANSI standard
enum class Style_unsupported {
  // less than 150 blinks per minute
  blink_slow = 5,
  // more than 150 blinks per minute, not widely supported
  blink_rapid = 6,
  // use the default terminal font
  font_default = 10,
  // use alternate font 1
  font_1 = 11,
  // use alternate font 2
  font_2 = 12,
  // use alternate font 3
  font_3 = 13,
  // use alternate font 4
  font_4 = 14,
  // use alternate font 5
  font_5 = 15,
  // use alternate font 6
  font_6 = 16,
  // use alternate font 7
  font_7 = 17,
  // use alternate font 8
  font_8 = 18,
  // use alternate font 9
  font_9 = 19,
  // german / european handwriting font
  font_fracture = 20,
  // disable blinking_slow and blinking_rapid
  disable_blinking = 25,
  // adds space in between characters, not widely supported
  proportional_spacing = 26,
  // disables proportional spacing
  disable_proportional_spacing = 50,
  // draw text inside a frame, sometimes emoji selector
  framed = 51,
  // draw text inside a circle, sometimes emoji selector
  encircled = 52,
  // draw line above text
  overlined = 53,
  // disables framed and encircled
  disable_framed_encircled = 54,
  // disable overlined
  disable_overline = 55,
  // ideogram underline, sometimes right side line
  ideogram_underline = 60,
  // double ideogram underline, sometimes double right side line
  ideogram_underline_double = 61,
  // ideogram overline, sometimes left line
  ideogram_overline = 62,
  // double ideogram overline, sometimes double left line
  ideogram_double_overline = 63,
  // ideogram stress marking
  ideogram_stress = 64,
  // disable all ideogram modifiers
  disable_ideogram = 65,
  superscript = 73,
  subscript = 74,
  // disables super- and subscript modifiers
  disable_super_subscript = 75
};
// takes Foxterm::Style as argument and returns it's ANSI code, recommended
std::string get_style(Style);
// takes Foxterm::Style_extra as argument and returns it's ANSI code, only use
// it if the effect is not that important
std::string get_style(Style_extra);
// takes Foxterm::Style_unsupported as argument and returns it's ANSI code, not
// recommended
std::string get_style(Style_unsupported);
} // namespace Foxterm
