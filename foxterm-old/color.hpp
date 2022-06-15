#pragma once

#include <string>

namespace Fterm {
// 4 bit foreground colors for formatting text using ANSI
enum class Color4_fg {
  reset = 39,
  black = 30,
  red = 31,
  green = 32,
  yellow = 33,
  blue = 34,
  magenta = 35,
  cyan = 36,
  white = 37,
  gray = 90,
  red_bright = 91,
  green_bright = 92,
  yellow_bright = 93,
  blue_bright = 94,
  magenta_bright = 95,
  cyan_bright = 96,
  white_bright = 97,
};
// 4 bit background colors for formatting text using ANSI
enum class Color4_bg {
  reset = 49,
  black = 40,
  red = 41,
  green = 42,
  yellow = 43,
  blue = 44,
  magenta = 45,
  cyan = 46,
  white = 47,
  gray = 100,
  red_bright = 101,
  green_bright = 102,
  yellow_bright = 103,
  blue_bright = 104,
  magenta_bright = 105,
  cyan_bright = 106,
  white_bright = 107,
};

// stored RGB colors
struct RGB {
  uint8_t r, g, b;
};

// creates RGB struct from r g b values
RGB make_rgb(uint8_t, uint8_t, uint8_t);

// takes Fterm::Color4_bg as argument and returns its ANSI code
std::string get_color4(Color4_bg);
// takes Fterm::Color4_fg as argument and returns its ANSI code
std::string get_color4(Color4_fg);

// resets all Style and color modifiers in the terminal
const char *reset();

/* takes a value from 0 to 255 and returns it's 8 bit ANSI code, foreground
 * color only 0 -   7: default colors as in Color4_fg 8 -  15: bright colors as
 * in Color4_fg 16 - 231: 6 x 6 x 6 cube (216 colors): 16 + 36 × r + 6 × g + b
 * (0 ≤ r, g, b ≤ 5) 232 - 255: grayscale from black to white in 24 steps More
 * info and source: https://en.wikipedia.org/wiki/ANSI_escape_code#8-bit
 */
std::string get_color8_fg(uint8_t);

/* takes a value from 0 to 255 and returns it's 8 bit ANSI code, background
 * color only 0 -   7: default colors as in Color4_bg 8 -  15: bright colors as
 * in Color4_bg 16 - 231: 6 x 6 x 6 cube (216 colors): 16 + 36 × r + 6 × g + b
 * (0 ≤ r, g, b ≤ 5) 232 - 255: grayscale from black to white in 24 steps More
 * info and source: https://en.wikipedia.org/wiki/ANSI_escape_code#8-bit
 */
std::string get_color8_bg(uint8_t);

/* takes a value from 0 to 255 and returns it's 8 bit ANSI code, underline color
 * only 0 -   7: default colors as in Color4 8 -  15: bright colors as in Color4
 *  16 - 231: 6 x 6 x 6 cube (216 colors): 16 + 36 × r + 6 × g + b (0 ≤ r, g, b
 * ≤ 5) 232 - 255: grayscale from black to white in 24 steps More info and
 * source: https://en.wikipedia.org/wiki/ANSI_escape_code#8-bit
 */
std::string get_color8_underline(uint8_t);

// takes a value from 0 to 255 for each R G B argument and returns it's 24 bit
// ANSI code, foreground color only
std::string get_color24_fg(uint8_t, uint8_t, uint8_t);
// takes a value from 0 to 255 for each R G B argument and returns it's 24 bit
// ANSI code, foreground color only
std::string get_color24_fg(RGB);

// takes a value from 0 to 255 for each R G B argument and returns it's 24 bit
// ANSI code, background color only
std::string get_color24_bg(uint8_t, uint8_t, uint8_t);
// takes a value from 0 to 255 for each R G B argument and returns it's 24 bit
// ANSI code, background color only
std::string get_color24_bg(RGB);

// takes a value from 0 to 255 for each R G B argument and returns it's 24 bit
// ANSI code, underline color only
std::string get_color24_underline(uint8_t, uint8_t, uint8_t);

// takes a value from 0 to 255 for each R G B argument and returns it's 24 bit
// ANSI code, underline color only
std::string get_color24_underline(RGB);
} // namespace Fterm
