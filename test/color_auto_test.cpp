#include <foxterm/color_auto.hpp>
#include <gtest/gtest.h>

TEST(color_auto_test, support_24bit) { EXPECT_NO_THROW(Foxterm::support_bit24()); }
TEST(color_auto_test, rgb_struct_normal_init) {
  Foxterm::RGB rgb_struct = {10, 10, 10};
  EXPECT_EQ(rgb_struct.r, 10);
  EXPECT_EQ(rgb_struct.g, 10);
  EXPECT_EQ(rgb_struct.b, 10);
}
TEST(color_auto_test, rgb_struct_makergb_init) {
  Foxterm::RGB rgb_struct = Foxterm::make_rgb(10, 10, 10);
  EXPECT_EQ(rgb_struct.r, 10);
  EXPECT_EQ(rgb_struct.g, 10);
  EXPECT_EQ(rgb_struct.b, 10);
}
TEST(color_auto_test, colorset_struct_normal_init) {
  Foxterm::Color_set col_set_struct = {Foxterm::RGB{10, 10, 10},
                                       Foxterm::RGB{10, 10, 10},
                                       10,
                                       10,
                                       Foxterm::Color4_fg::red,
                                       Foxterm::Color4_bg::red,
                                       Foxterm::Colors_available::all,
                                       Foxterm::Colors_available::all};
  // rgb foreground
  EXPECT_EQ(col_set_struct.rgb_fg.r, 10);
  EXPECT_EQ(col_set_struct.rgb_fg.g, 10);
  EXPECT_EQ(col_set_struct.rgb_fg.b, 10);
  // rgb background
  EXPECT_EQ(col_set_struct.rgb_bg.r, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.g, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.b, 10);
  // 8 bit
  EXPECT_EQ(col_set_struct.bit8_fg, 10);
  EXPECT_EQ(col_set_struct.bit8_bg, 10);
  // 4 bit
  EXPECT_EQ(col_set_struct.bit4_fg, Foxterm::Color4_fg::red);
  EXPECT_EQ(col_set_struct.bit4_bg, Foxterm::Color4_bg::red);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg, Foxterm::Colors_available::all);
  EXPECT_EQ(col_set_struct.colors_available_bg, Foxterm::Colors_available::all);
}
TEST(color_auto_test, colorset_struct_make_color_set_init_all_manual) {
  // set all colors manually
  Foxterm::Color_set col_set_struct = init_color_set_all(
      Foxterm::make_rgb(10, 10, 10), Foxterm::make_rgb(10, 10, 10), 10, 10,
      Foxterm::Color4_fg::red, Foxterm::Color4_bg::red);
  // rgb foreground
  EXPECT_EQ(col_set_struct.rgb_fg.r, 10);
  EXPECT_EQ(col_set_struct.rgb_fg.g, 10);
  EXPECT_EQ(col_set_struct.rgb_fg.b, 10);
  // rgb background
  EXPECT_EQ(col_set_struct.rgb_bg.r, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.g, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.b, 10);
  // 8 bit
  EXPECT_EQ(col_set_struct.bit8_fg, 10);
  EXPECT_EQ(col_set_struct.bit8_bg, 10);
  // 4 bit
  EXPECT_EQ(col_set_struct.bit4_fg, Foxterm::Color4_fg::red);
  EXPECT_EQ(col_set_struct.bit4_bg, Foxterm::Color4_bg::red);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg, Foxterm::Colors_available::all);
  EXPECT_EQ(col_set_struct.colors_available_bg, Foxterm::Colors_available::all);
}
TEST(color_auto_test, colorset_struct_make_color_set_init_all_generate) {
  // generate 8 bit color automatically
  Foxterm::Color_set col_set_struct = init_color_set_all(
      Foxterm::make_rgb(10, 10, 10), Foxterm::make_rgb(10, 10, 10),
      Foxterm::Color4_fg::red, Foxterm::Color4_bg::red);
  // rgb foreground
  EXPECT_EQ(col_set_struct.rgb_fg.r, 10);
  EXPECT_EQ(col_set_struct.rgb_fg.g, 10);
  EXPECT_EQ(col_set_struct.rgb_fg.b, 10);
  // rgb background
  EXPECT_EQ(col_set_struct.rgb_bg.r, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.g, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.b, 10);
  // 8 bit
  EXPECT_EQ(col_set_struct.bit8_fg, 16);
  EXPECT_EQ(col_set_struct.bit8_bg, 16);
  // 4 bit
  EXPECT_EQ(col_set_struct.bit4_fg, Foxterm::Color4_fg::red);
  EXPECT_EQ(col_set_struct.bit4_bg, Foxterm::Color4_bg::red);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg, Foxterm::Colors_available::all);
  EXPECT_EQ(col_set_struct.colors_available_bg, Foxterm::Colors_available::all);
}
TEST(color_auto_test, colorset_struct_make_color_set_init_all_rgb_only) {
  // set only RGB colors
  Foxterm::Color_set col_set_struct = Foxterm::init_color_set_all(
      Foxterm::make_rgb(10, 10, 10), Foxterm::make_rgb(10, 10, 10));
  // rgb foreground
  EXPECT_EQ(col_set_struct.rgb_fg.r, 10);
  EXPECT_EQ(col_set_struct.rgb_fg.g, 10);
  EXPECT_EQ(col_set_struct.rgb_fg.b, 10);
  // rgb background
  EXPECT_EQ(col_set_struct.rgb_bg.r, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.g, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.b, 10);
  // 8 bit
  EXPECT_EQ(col_set_struct.bit8_fg, 16);
  EXPECT_EQ(col_set_struct.bit8_bg, 16);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg,
            Foxterm::Colors_available::bit8_24);
  EXPECT_EQ(col_set_struct.colors_available_bg,
            Foxterm::Colors_available::bit8_24);
}
TEST(color_auto_test, colorset_struct_make_color_set_init_all_4bit_only) {
  // only 4 bit colors
  Foxterm::Color_set col_set_struct = Foxterm::init_color_set_all(
      Foxterm::Color4_fg::red, Foxterm::Color4_bg::red);
  // 4 bit
  EXPECT_EQ(col_set_struct.bit4_fg, Foxterm::Color4_fg::red);
  EXPECT_EQ(col_set_struct.bit4_bg, Foxterm::Color4_bg::red);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg,
            Foxterm::Colors_available::bit4);
  EXPECT_EQ(col_set_struct.colors_available_bg,
            Foxterm::Colors_available::bit4);
}

TEST(color_auto_test, colorset_struct_make_color_set_init_fg_manual) {
  // set all colors manually
  Foxterm::Color_set col_set_struct = Foxterm::init_color_set_fg(
      Foxterm::make_rgb(10, 10, 10), 10, Foxterm::Color4_fg::red);
  // rgb foreground
  EXPECT_EQ(col_set_struct.rgb_fg.r, 10);
  EXPECT_EQ(col_set_struct.rgb_fg.g, 10);
  EXPECT_EQ(col_set_struct.rgb_fg.b, 10);
  // 8 bit
  EXPECT_EQ(col_set_struct.bit8_fg, 10);
  // 4 bit
  EXPECT_EQ(col_set_struct.bit4_fg, Foxterm::Color4_fg::red);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg, Foxterm::Colors_available::all);
  EXPECT_EQ(col_set_struct.colors_available_bg,
            Foxterm::Colors_available::none);
}
TEST(color_auto_test, colorset_struct_make_color_set_init_fg_generate) {
  // generate 8 bit color automatically
  Foxterm::Color_set col_set_struct = Foxterm::init_color_set_fg(
      Foxterm::make_rgb(10, 10, 10), Foxterm::Color4_fg::red);
  // rgb foreground
  EXPECT_EQ(col_set_struct.rgb_fg.r, 10);
  EXPECT_EQ(col_set_struct.rgb_fg.g, 10);
  EXPECT_EQ(col_set_struct.rgb_fg.b, 10);
  // 8 bit
  EXPECT_EQ(col_set_struct.bit8_fg, 16);
  // 4 bit
  EXPECT_EQ(col_set_struct.bit4_fg, Foxterm::Color4_fg::red);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg, Foxterm::Colors_available::all);
  EXPECT_EQ(col_set_struct.colors_available_bg,
            Foxterm::Colors_available::none);
}
TEST(color_auto_test, colorset_struct_make_color_set_init_fg_rgb_only) {
  // set only RGB colors
  Foxterm::Color_set col_set_struct =
      Foxterm::init_color_set_fg(Foxterm::make_rgb(10, 10, 10));
  // rgb foreground
  EXPECT_EQ(col_set_struct.rgb_fg.r, 10);
  EXPECT_EQ(col_set_struct.rgb_fg.g, 10);
  EXPECT_EQ(col_set_struct.rgb_fg.b, 10);
  // 8 bit
  EXPECT_EQ(col_set_struct.bit8_fg, 16);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg,
            Foxterm::Colors_available::bit8_24);
  EXPECT_EQ(col_set_struct.colors_available_bg,
            Foxterm::Colors_available::none);
}
TEST(color_auto_test, colorset_struct_make_color_set_init_fg_4bit_only) {
  // only 4 bit colors
  Foxterm::Color_set col_set_struct =
      Foxterm::init_color_set_fg(Foxterm::Color4_fg::red);
  // 4 bit
  EXPECT_EQ(col_set_struct.bit4_fg, Foxterm::Color4_fg::red);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg,
            Foxterm::Colors_available::bit4);
  EXPECT_EQ(col_set_struct.colors_available_bg,
            Foxterm::Colors_available::none);
}
TEST(color_auto_test, colorset_struct_make_color_set_init_bg_manual) {
  // set all colors manually
  Foxterm::Color_set col_set_struct = Foxterm::init_color_set_bg(
      Foxterm::make_rgb(10, 10, 10), 10, Foxterm::Color4_bg::red);
  // rgb background
  EXPECT_EQ(col_set_struct.rgb_bg.r, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.g, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.b, 10);
  // 8 bit
  EXPECT_EQ(col_set_struct.bit8_bg, 10);
  // 4 bit
  EXPECT_EQ(col_set_struct.bit4_bg, Foxterm::Color4_bg::red);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg,
            Foxterm::Colors_available::none);
  EXPECT_EQ(col_set_struct.colors_available_bg, Foxterm::Colors_available::all);
}
TEST(color_auto_test, colorset_struct_make_color_set_init_bg_generate) {
  // generate 8 bit color automatically
  Foxterm::Color_set col_set_struct = Foxterm::init_color_set_bg(
      Foxterm::make_rgb(10, 10, 10), Foxterm::Color4_bg::red);
  // rgb background
  EXPECT_EQ(col_set_struct.rgb_bg.r, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.g, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.b, 10);
  // 8 bit
  EXPECT_EQ(col_set_struct.bit8_bg, 16);
  // 4 bit
  EXPECT_EQ(col_set_struct.bit4_bg, Foxterm::Color4_bg::red);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg,
            Foxterm::Colors_available::none);
  EXPECT_EQ(col_set_struct.colors_available_bg, Foxterm::Colors_available::all);
}
TEST(color_auto_test, colorset_struct_make_color_set_init_bg_rgb_only) {
  // set only RGB colors
  Foxterm::Color_set col_set_struct =
      Foxterm::init_color_set_bg(Foxterm::make_rgb(10, 10, 10));
  // rgb background
  EXPECT_EQ(col_set_struct.rgb_bg.r, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.g, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.b, 10);
  // 8 bit
  EXPECT_EQ(col_set_struct.bit8_bg, 16);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg,
            Foxterm::Colors_available::none);
  EXPECT_EQ(col_set_struct.colors_available_bg,
            Foxterm::Colors_available::bit8_24);
}
TEST(color_auto_test, colorset_struct_make_color_set_init_bg_4bit_only) {
  // only 4 bit colors
  Foxterm::Color_set col_set_struct =
      Foxterm::init_color_set_bg(Foxterm::Color4_bg::red);
  // 4 bit
  EXPECT_EQ(col_set_struct.bit4_bg, Foxterm::Color4_bg::red);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg,
            Foxterm::Colors_available::none);
  EXPECT_EQ(col_set_struct.colors_available_bg,
            Foxterm::Colors_available::bit4);
}
TEST(color_auto_test, colorset_struct_make_color_set_init_none) {
  // no colors at all
  Foxterm::Color_set col_set_struct = Foxterm::init_color_set_none();
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg,
            Foxterm::Colors_available::none);
  EXPECT_EQ(col_set_struct.colors_available_bg,
            Foxterm::Colors_available::none);
}
TEST(color_auto_test, auto_color_all) {
  Foxterm::Color_set col_set = Foxterm::init_color_set_all(
      Foxterm::make_rgb(255, 0, 0), Foxterm::make_rgb(255, 5, 40), 30, 35,
      Foxterm::Color4_fg::magenta, Foxterm::Color4_bg::yellow);
  if (Foxterm::support_bit24())
    EXPECT_EQ(Foxterm::get_color_auto(col_set),
              "\033[38;2;255;0;0m\033[48;2;255;5;40m");
  else
    EXPECT_EQ(Foxterm::get_color_auto(col_set), "\033[38;5;30m\033[48;5;35m");
  // overridden to 24bit
  if (Foxterm::support_bit24())
    EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit24),
              "\033[38;2;255;0;0m\033[48;2;255;5;40m");
  else
    EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit24),
              "\033[38;5;30m\033[48;5;35m");
  // overriden to 8 bit
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit8),
            "\033[38;5;30m\033[48;5;35m");
  // overridden to 4 bit
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit4),
            "\033[35m\033[43m");
  // overridden to none
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::none), "");
}
TEST(color_auto_test, auto_color_limited_rgb) {
  Foxterm::Color_set col_set = Foxterm::init_color_set_all(
      Foxterm::make_rgb(255, 0, 0), Foxterm::make_rgb(255, 5, 40));
  if (Foxterm::support_bit24())
    EXPECT_EQ(Foxterm::get_color_auto(col_set),
              "\033[38;2;255;0;0m\033[48;2;255;5;40m");
  else
    EXPECT_EQ(Foxterm::get_color_auto(col_set), "\033[38;5;196m\033[48;5;196m");
  // overridden to 24bit
  if (Foxterm::support_bit24())
    EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit24),
              "\033[38;2;255;0;0m\033[48;2;255;5;40m");
  else
    EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit24),
              "\033[38;5;196m\033[48;5;196m");
  // overriden to 8 bit
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit8),
            "\033[38;5;196m\033[48;5;196m");
  // overridden to 4 bit
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit4), "");
  // overridden to none
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::none), "");
}
TEST(color_auto_test, auto_color_limited_4bit) {
  Foxterm::Color_set col_set = Foxterm::init_color_set_all(
      Foxterm::Color4_fg::black, Foxterm::Color4_bg::black);
  EXPECT_EQ(Foxterm::get_color_auto(col_set), "\033[30m\033[40m");
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit24),
            "\033[30m\033[40m");
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit8),
            "\033[30m\033[40m");
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit4),
            "\033[30m\033[40m");
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::none), "");
}
TEST(color_auto_test, auto_color_limited_none) {
  Foxterm::Color_set col_set = Foxterm::init_color_set_none();
  EXPECT_EQ(Foxterm::get_color_auto(col_set), "");
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit24), "");
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit8), "");
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit4), "");
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::none), "");
}
