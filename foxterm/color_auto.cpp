#include "color_auto.hpp"
#include "convert.hpp"
#include <iostream>

bool Foxterm::support_bit24() {
  // TODO: Windows
  // fix as you can't make a string out of a nullptr
  if (std::getenv("COLORTERM") == nullptr)
    return false;
  else if ((std::string)std::getenv("COLORTERM") == "truecolor")
    return true;
  return false;
}

Foxterm::Color_set Foxterm::init_color_set_all(RGB rgb_fg, RGB rgb_bg,
                                               uint8_t bit8_fg, uint8_t bit8_bg,
                                               Color4_fg bit4_fg,
                                               Color4_bg bit4_bg) {
  return Color_set{rgb_fg,
                   rgb_bg,
                   bit8_fg,
                   bit8_bg,
                   bit4_fg,
                   bit4_bg,
                   Colors_available::all,
                   Colors_available::all};
}
Foxterm::Color_set Foxterm::init_color_set_all(RGB rgb_fg, RGB rgb_bg,
                                               Color4_fg bit4_fg,
                                               Color4_bg bit4_bg) {
  return Color_set{rgb_fg,
                   rgb_bg,
                   convert_bit24_bit8_dark(rgb_fg.r, rgb_fg.g, rgb_fg.b),
                   convert_bit24_bit8_dark(rgb_bg.r, rgb_bg.g, rgb_bg.b),
                   bit4_fg,
                   bit4_bg,
                   Colors_available::all,
                   Colors_available::all};
}
Foxterm::Color_set Foxterm::init_color_set_all(RGB rgb_fg, RGB rgb_bg) {
  return Color_set{rgb_fg,
                   rgb_bg,
                   convert_bit24_bit8_dark(rgb_fg.r, rgb_fg.g, rgb_fg.b),
                   convert_bit24_bit8_dark(rgb_bg.r, rgb_bg.g, rgb_bg.b),
                   Color4_fg::reset,
                   Color4_bg::reset,
                   Colors_available::bit8_24,
                   Colors_available::bit8_24};
}
Foxterm::Color_set Foxterm::init_color_set_all(Color4_fg bit4_fg,
                                               Color4_bg bit4_bg) {
  return Color_set{
      make_rgb(0, 0, 0),      make_rgb(0, 0, 0),     0, 0, bit4_fg, bit4_bg,
      Colors_available::bit4, Colors_available::bit4};
}
Foxterm::Color_set Foxterm::init_color_set_fg(RGB rgb_fg, uint8_t bit8_fg,
                                              Color4_fg bit4_fg) {
  return Color_set{rgb_fg,
                   make_rgb(0, 0, 0),
                   bit8_fg,
                   0,
                   bit4_fg,
                   Color4_bg::reset,
                   Colors_available::all,
                   Colors_available::none};
}
Foxterm::Color_set Foxterm::init_color_set_fg(RGB rgb_fg, Color4_fg bit4_fg) {
  return Color_set{rgb_fg,
                   make_rgb(0, 0, 0),
                   convert_bit24_bit8_dark(rgb_fg.r, rgb_fg.g, rgb_fg.b),
                   0,
                   bit4_fg,
                   Color4_bg::reset,
                   Colors_available::all,
                   Colors_available::none};
}
Foxterm::Color_set Foxterm::init_color_set_fg(RGB rgb_fg) {
  return Color_set{rgb_fg,
                   make_rgb(0, 0, 0),
                   convert_bit24_bit8_dark(rgb_fg.r, rgb_fg.g, rgb_fg.b),
                   0,
                   Color4_fg::reset,
                   Color4_bg::reset,
                   Colors_available::bit8_24,
                   Colors_available::none};
}

Foxterm::Color_set Foxterm::init_color_set_fg(Color4_fg bit4_fg) {
  return Color_set{make_rgb(0, 0, 0),
                   make_rgb(0, 0, 0),
                   0,
                   0,
                   bit4_fg,
                   Color4_bg::reset,
                   Colors_available::bit4,
                   Colors_available::none};
}
Foxterm::Color_set Foxterm::init_color_set_bg(RGB rgb_bg, uint8_t bit8_bg,
                                              Color4_bg bit4_bg) {
  return Color_set{make_rgb(0, 0, 0),
                   rgb_bg,
                   0,
                   bit8_bg,
                   Color4_fg::reset,
                   bit4_bg,
                   Colors_available::none,
                   Colors_available::all};
}
Foxterm::Color_set Foxterm::init_color_set_bg(RGB rgb_bg, Color4_bg bit4_bg) {
  return Color_set{make_rgb(0, 0, 0),
                   rgb_bg,
                   0,
                   convert_bit24_bit8_dark(rgb_bg.r, rgb_bg.g, rgb_bg.b),
                   Color4_fg::reset,
                   bit4_bg,
                   Colors_available::none,
                   Colors_available::all};
}
Foxterm::Color_set Foxterm::init_color_set_bg(RGB rgb_bg) {
  return Color_set{make_rgb(0, 0, 0),
                   rgb_bg,
                   0,
                   convert_bit24_bit8_dark(rgb_bg.r, rgb_bg.g, rgb_bg.b),
                   Color4_fg::reset,
                   Color4_bg::reset,
                   Colors_available::none,
                   Colors_available::bit8_24};
}
Foxterm::Color_set Foxterm::init_color_set_bg(Color4_bg bit4_bg) {
  return Color_set{make_rgb(0, 0, 0),
                   make_rgb(0, 0, 0),
                   0,
                   0,
                   Color4_fg::reset,
                   bit4_bg,
                   Colors_available::none,
                   Colors_available::bit4};
}
Foxterm::Color_set Foxterm::init_color_set_none() {
  return Color_set{make_rgb(0, 0, 0),
                   make_rgb(0, 0, 0),
                   0,
                   0,
                   Color4_fg::reset,
                   Color4_bg::reset,
                   Colors_available::none,
                   Colors_available::none};
}
std::string Foxterm::get_color_auto(Color_set col_set) {
  std::string ansi_code = "";

  // foreground color
  if (col_set.colors_available_fg == Colors_available::all ||
      col_set.colors_available_fg == Colors_available::bit8_24) {
    if (support_bit24())
      ansi_code.append(
          get_color24_fg(col_set.rgb_fg.r, col_set.rgb_fg.g, col_set.rgb_fg.b));
    else
      ansi_code.append(get_color8_fg(col_set.bit8_fg));
  } else if (col_set.colors_available_fg == Colors_available::bit4)
    ansi_code.append(get_color4(col_set.bit4_fg));

  // background color
  if (col_set.colors_available_bg == Colors_available::all ||
      col_set.colors_available_bg == Colors_available::bit8_24) {
    if (support_bit24())
      ansi_code.append(
          get_color24_bg(col_set.rgb_bg.r, col_set.rgb_bg.g, col_set.rgb_bg.b));
    else
      ansi_code.append(get_color8_bg(col_set.bit8_bg));
  } else if (col_set.colors_available_bg == Colors_available::bit4)
    ansi_code.append(get_color4(col_set.bit4_bg));

  return ansi_code;
}

std::string Foxterm::get_color_auto(Color_set col_set, Color_use color_max) {
  std::string ansi_code = "";

  // foreground color
  if ((col_set.colors_available_fg == Colors_available::all ||
       col_set.colors_available_fg == Colors_available::bit8_24) &&
      (color_max == Color_use::bit24 || color_max == Color_use::bit8)) {
    if (support_bit24() && color_max == Color_use::bit24)
      ansi_code.append(
          get_color24_fg(col_set.rgb_fg.r, col_set.rgb_fg.g, col_set.rgb_fg.b));
    else
      ansi_code.append(get_color8_fg(col_set.bit8_fg));
  } else if ((col_set.colors_available_fg == Colors_available::all ||
              col_set.colors_available_fg == Colors_available::bit4) &&
             (color_max == Color_use::bit24 || color_max == Color_use::bit8 ||
              color_max == Color_use::bit4))
    ansi_code.append(get_color4(col_set.bit4_fg));

  // background color
  if ((col_set.colors_available_bg == Colors_available::all ||
       col_set.colors_available_bg == Colors_available::bit8_24) &&
      (color_max == Color_use::bit24 || color_max == Color_use::bit8)) {
    if (support_bit24() && color_max == Color_use::bit24)
      ansi_code.append(
          get_color24_bg(col_set.rgb_bg.r, col_set.rgb_bg.g, col_set.rgb_bg.b));
    else
      ansi_code.append(get_color8_bg(col_set.bit8_bg));
  } else if ((col_set.colors_available_bg == Colors_available::all ||
              col_set.colors_available_bg == Colors_available::bit4) &&
             (color_max == Color_use::bit24 || color_max == Color_use::bit8 ||
              color_max == Color_use::bit4))
    ansi_code.append(get_color4(col_set.bit4_bg));

  return ansi_code;
}
