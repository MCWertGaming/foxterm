#pragma once
#include "color.hpp"

namespace Fterm {

// indicates the color support by a color set
enum class Colors_available { none, bit4, bit8_24, all };
// indicates method for converting 24 bit colors to 8 bit
enum class conversion_method { dark, bright };
// set the highest color used by get_auto_color(), when set all higher colors are
// ignored
enum class Color_use { bit24, bit8, bit4, none };
// Store colors for the auto color mode
struct Color_set {
  RGB rgb_fg;
  RGB rgb_bg;
  uint8_t bit8_fg;
  uint8_t bit8_bg;
  Color4_fg bit4_fg;
  Color4_bg bit4_bg;
  Colors_available colors_available_fg;
  Colors_available colors_available_bg;
};

// returns true if the console claims to support 24 bit colors
bool support_bit24();

// create color set with foreground and background colors
Color_set init_color_set_all(RGB, RGB, uint8_t, uint8_t, Color4_fg, Color4_bg);

// create color set with generated 8-bit colors, foreground and background colors
Color_set init_color_set_all(RGB, RGB, Color4_fg, Color4_bg);

// create color set with generated 8-bit colors, no 4 bit colors, foreground and
// background colors
Color_set init_color_set_all(RGB, RGB);

// create color set with only 4 bit colors, foreground and background colors
Color_set init_color_set_all(Color4_fg, Color4_bg);

// create color set with foreground colors only
Color_set init_color_set_fg(RGB, uint8_t, Color4_fg);

// create color set with generated 8-bit colors, foreground colors only
Color_set init_color_set_fg(RGB, Color4_fg);

// create color set with generated 8-bit colors, no 4 bit colors, foreground
// colors only
Color_set init_color_set_fg(RGB);

// create color set with only 4 bit colors, foreground colors only
Color_set init_color_set_fg(Color4_fg);

// create color set with background colors only
Color_set init_color_set_bg(RGB, uint8_t, Color4_bg);

// create color set with generated 8-bit colors, background colors only
Color_set init_color_set_bg(RGB, Color4_bg);

// create color set with generated 8-bit colors, no 4 bit colors, background
// colors only
Color_set init_color_set_bg(RGB);

// create color set with only 4 bit colors, foreground colors only
Color_set init_color_set_bg(Color4_bg);

// create empty color set with no colors
Color_set init_color_set_none();

// returns the highest available and supported color supported by the user's
// system
std::string get_color_auto(Color_set);

// returns the highest available and supported color by the user's system, the
// maximum used color is override manually
std::string get_color_auto(Color_set col_set, Color_use color_max);
} // namespace Fterm
