#include <foxterm/color.hpp>
#include <foxterm/color_auto.hpp>
#include <foxterm/convert.hpp>
#include <foxterm/info.hpp>
#include <foxterm/style.hpp>
#include <gtest/gtest.h>

TEST(base_test, style_test) {
  // supported
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style::reset), "\033[0m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style::bold), "\033[1m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style::dim), "\033[2m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style::disable_bold_dim), "\033[22m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style::disable_invert), "\033[27m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style::disable_italic), "\033[23m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style::invert), "\033[7m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style::italic), "\033[3m");
  // extra
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_extra::hide), "\033[8m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_extra::disable_underline), "\033[24m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_extra::dissable_strike), "\033[29m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_extra::reveal), "\033[28m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_extra::strike), "\033[9m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_extra::underline), "\033[4m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_extra::underline_double), "\033[21m");
  // unsupported
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::font_1), "\033[11m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::font_2), "\033[12m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::font_3), "\033[13m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::font_4), "\033[14m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::font_5), "\033[15m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::font_6), "\033[16m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::font_7), "\033[17m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::font_8), "\033[18m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::font_9), "\033[19m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::font_default), "\033[10m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::blink_rapid), "\033[6m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::blink_slow), "\033[5m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::disable_blinking), "\033[25m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::disable_framed_encircled), "\033[54m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::disable_overline), "\033[55m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::disable_proportional_spacing),
            "\033[50m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::encircled), "\033[52m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::font_fracture), "\033[20m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::framed), "\033[51m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::overlined), "\033[53m");
  EXPECT_EQ(Foxterm::get_style(Foxterm::Style_unsupported::proportional_spacing), "\033[26m");
}

TEST(base_test, 4bit_color_test) {
  // foreground
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_fg::black), "\033[30m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_fg::blue), "\033[34m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_fg::blue_bright), "\033[94m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_fg::cyan), "\033[36m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_fg::cyan_bright), "\033[96m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_fg::gray), "\033[90m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_fg::green), "\033[32m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_fg::green_bright), "\033[92m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_fg::magenta), "\033[35m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_fg::magenta_bright), "\033[95m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_fg::red), "\033[31m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_fg::red_bright), "\033[91m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_fg::reset), "\033[39m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_fg::white), "\033[37m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_fg::white_bright), "\033[97m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_fg::yellow), "\033[33m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_fg::yellow_bright), "\033[93m");
  // background
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_bg::black), "\033[40m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_bg::blue), "\033[44m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_bg::blue_bright), "\033[104m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_bg::cyan), "\033[46m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_bg::cyan_bright), "\033[106m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_bg::gray), "\033[100m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_bg::green), "\033[42m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_bg::green_bright), "\033[102m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_bg::magenta), "\033[45m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_bg::magenta_bright), "\033[105m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_bg::red), "\033[41m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_bg::red_bright), "\033[101m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_bg::reset), "\033[49m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_bg::white), "\033[47m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_bg::white_bright), "\033[107m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_bg::yellow), "\033[43m");
  EXPECT_EQ(Foxterm::get_color4(Foxterm::Color4_bg::yellow_bright), "\033[103m");
}
TEST(base_test, 8bit_colors) {
  // foreground
  EXPECT_EQ(Foxterm::get_color8_fg(0), "\033[38;5;0m");
  EXPECT_EQ(Foxterm::get_color8_fg(10), "\033[38;5;10m");
  EXPECT_EQ(Foxterm::get_color8_fg(255), "\033[38;5;255m");
  EXPECT_EQ(Foxterm::get_color8_fg(99), "\033[38;5;99m");
  // background
  EXPECT_EQ(Foxterm::get_color8_bg(0), "\033[48;5;0m");
  EXPECT_EQ(Foxterm::get_color8_bg(10), "\033[48;5;10m");
  EXPECT_EQ(Foxterm::get_color8_bg(255), "\033[48;5;255m");
  EXPECT_EQ(Foxterm::get_color8_bg(99), "\033[48;5;99m");
  // underline
  EXPECT_EQ(Foxterm::get_color8_underline(0), "\033[58;5;0m");
  EXPECT_EQ(Foxterm::get_color8_underline(255), "\033[58;5;255m");
  EXPECT_EQ(Foxterm::get_color8_underline(30), "\033[58;5;30m");
}
TEST(base_test, 8bit_conversion) {
  // foreground dark
  EXPECT_EQ(Foxterm::get_color8_fg(Foxterm::convert_bit24_bit8_dark(0, 0, 0)), "\033[38;5;16m");
  EXPECT_EQ(Foxterm::get_color8_fg(Foxterm::convert_bit24_bit8_dark(255, 255, 255)),
            "\033[38;5;231m");
  EXPECT_EQ(Foxterm::get_color8_fg(Foxterm::convert_bit24_bit8_dark(0, 255, 0)), "\033[38;5;46m");
  // background dark
  EXPECT_EQ(Foxterm::get_color8_bg(Foxterm::convert_bit24_bit8_dark(0, 0, 0)), "\033[48;5;16m");
  EXPECT_EQ(Foxterm::get_color8_bg(Foxterm::convert_bit24_bit8_dark(255, 255, 255)),
            "\033[48;5;231m");
  EXPECT_EQ(Foxterm::get_color8_bg(Foxterm::convert_bit24_bit8_dark(0, 255, 0)), "\033[48;5;46m");
  // foreground bright
  EXPECT_EQ(Foxterm::get_color8_fg(Foxterm::convert_bit24_bit8_bright(0, 0, 0)), "\033[38;5;16m");
  EXPECT_EQ(Foxterm::get_color8_fg(Foxterm::convert_bit24_bit8_bright(255, 255, 255)),
            "\033[38;5;231m");
  EXPECT_EQ(Foxterm::get_color8_fg(Foxterm::convert_bit24_bit8_bright(0, 255, 0)),
            "\033[38;5;46m");
  // background dark
  EXPECT_EQ(Foxterm::get_color8_bg(Foxterm::convert_bit24_bit8_bright(0, 0, 0)), "\033[48;5;16m");
  EXPECT_EQ(Foxterm::get_color8_bg(Foxterm::convert_bit24_bit8_bright(255, 255, 255)),
            "\033[48;5;231m");
  EXPECT_EQ(Foxterm::get_color8_bg(Foxterm::convert_bit24_bit8_bright(0, 255, 0)),
            "\033[48;5;46m");
}
TEST(base_test, 8bit_conversion_struct) {
  // foreground dark
  EXPECT_EQ(Foxterm::get_color8_fg(convert_bit24_bit8_dark(Foxterm::make_rgb(0, 0, 0))),
            "\033[38;5;16m");
  EXPECT_EQ(Foxterm::get_color8_fg(convert_bit24_bit8_dark(Foxterm::make_rgb(255, 255, 255))),
            "\033[38;5;231m");
  EXPECT_EQ(Foxterm::get_color8_fg(convert_bit24_bit8_dark(Foxterm::make_rgb(0, 255, 0))),
            "\033[38;5;46m");
  // background dark
  EXPECT_EQ(Foxterm::get_color8_bg(convert_bit24_bit8_dark(Foxterm::make_rgb(0, 0, 0))),
            "\033[48;5;16m");
  EXPECT_EQ(Foxterm::get_color8_bg(convert_bit24_bit8_dark(Foxterm::make_rgb(255, 255, 255))),
            "\033[48;5;231m");
  EXPECT_EQ(Foxterm::get_color8_bg(convert_bit24_bit8_dark(Foxterm::make_rgb(0, 255, 0))),
            "\033[48;5;46m");
  // foreground bright
  EXPECT_EQ(Foxterm::get_color8_fg(convert_bit24_bit8_bright(Foxterm::make_rgb(0, 0, 0))),
            "\033[38;5;16m");
  EXPECT_EQ(Foxterm::get_color8_fg(convert_bit24_bit8_bright(Foxterm::make_rgb(255, 255, 255))),
            "\033[38;5;231m");
  EXPECT_EQ(Foxterm::get_color8_fg(convert_bit24_bit8_bright(Foxterm::make_rgb(0, 255, 0))),
            "\033[38;5;46m");
  // background dark
  EXPECT_EQ(Foxterm::get_color8_bg(convert_bit24_bit8_bright(Foxterm::make_rgb(0, 0, 0))),
            "\033[48;5;16m");
  EXPECT_EQ(Foxterm::get_color8_bg(convert_bit24_bit8_bright(Foxterm::make_rgb(255, 255, 255))),
            "\033[48;5;231m");
  EXPECT_EQ(Foxterm::get_color8_bg(convert_bit24_bit8_bright(Foxterm::make_rgb(0, 255, 0))),
            "\033[48;5;46m");
}
TEST(base_test, 24bit_colors) {
  // foreground
  EXPECT_EQ(Foxterm::get_color24_fg(0, 0, 0), "\033[38;2;0;0;0m");
  EXPECT_EQ(Foxterm::get_color24_fg(255, 255, 255), "\033[38;2;255;255;255m");
  EXPECT_EQ(Foxterm::get_color24_fg(20, 20, 20), "\033[38;2;20;20;20m");
  EXPECT_EQ(Foxterm::get_color24_fg(3, 4, 5), "\033[38;2;3;4;5m");
  // background
  EXPECT_EQ(Foxterm::get_color24_bg(0, 0, 0), "\033[48;2;0;0;0m");
  EXPECT_EQ(Foxterm::get_color24_bg(255, 255, 255), "\033[48;2;255;255;255m");
  EXPECT_EQ(Foxterm::get_color24_bg(20, 20, 20), "\033[48;2;20;20;20m");
  EXPECT_EQ(Foxterm::get_color24_bg(3, 4, 5), "\033[48;2;3;4;5m");
  // underline
  EXPECT_EQ(Foxterm::get_color24_underline(0, 0, 0), "\033[58;2;0;0;0m");
  EXPECT_EQ(Foxterm::get_color24_underline(255, 255, 255), "\033[58;2;255;255;255m");
  EXPECT_EQ(Foxterm::get_color24_underline(20, 20, 20), "\033[58;2;20;20;20m");
  EXPECT_EQ(Foxterm::get_color24_underline(3, 4, 5), "\033[58;2;3;4;5m");
}
TEST(base_test, 24bit_colors_struct) {
  // foreground
  EXPECT_EQ(Foxterm::get_color24_fg(Foxterm::make_rgb(0, 0, 0)), "\033[38;2;0;0;0m");
  EXPECT_EQ(Foxterm::get_color24_fg(Foxterm::make_rgb(255, 255, 255)), "\033[38;2;255;255;255m");
  EXPECT_EQ(Foxterm::get_color24_fg(Foxterm::make_rgb(20, 20, 20)), "\033[38;2;20;20;20m");
  EXPECT_EQ(Foxterm::get_color24_fg(Foxterm::make_rgb(3, 4, 5)), "\033[38;2;3;4;5m");
  // background
  EXPECT_EQ(Foxterm::get_color24_bg(Foxterm::make_rgb(0, 0, 0)), "\033[48;2;0;0;0m");
  EXPECT_EQ(Foxterm::get_color24_bg(Foxterm::make_rgb(255, 255, 255)), "\033[48;2;255;255;255m");
  EXPECT_EQ(Foxterm::get_color24_bg(Foxterm::make_rgb(20, 20, 20)), "\033[48;2;20;20;20m");
  EXPECT_EQ(Foxterm::get_color24_bg(Foxterm::make_rgb(3, 4, 5)), "\033[48;2;3;4;5m");
  // underline
  EXPECT_EQ(Foxterm::get_color24_underline(Foxterm::make_rgb(0, 0, 0)), "\033[58;2;0;0;0m");
  EXPECT_EQ(Foxterm::get_color24_underline(Foxterm::make_rgb(255, 255, 255)),
            "\033[58;2;255;255;255m");
  EXPECT_EQ(Foxterm::get_color24_underline(Foxterm::make_rgb(20, 20, 20)), "\033[58;2;20;20;20m");
  EXPECT_EQ(Foxterm::get_color24_underline(Foxterm::make_rgb(3, 4, 5)), "\033[58;2;3;4;5m");
}
TEST(base_test, reset) { EXPECT_EQ(Foxterm::reset(), "\033[0m"); }
TEST(base_test, support_24bit) { EXPECT_NO_THROW(Foxterm::support_bit24()); }
TEST(base_test, rgb_struct_normal_init) {
  Foxterm::RGB rgb_struct = {10, 10, 10};
  EXPECT_EQ(rgb_struct.r, 10);
  EXPECT_EQ(rgb_struct.g, 10);
  EXPECT_EQ(rgb_struct.b, 10);
}
TEST(base_test, rgb_struct_makergb_init) {
  Foxterm::RGB rgb_struct = Foxterm::make_rgb(10, 10, 10);
  EXPECT_EQ(rgb_struct.r, 10);
  EXPECT_EQ(rgb_struct.g, 10);
  EXPECT_EQ(rgb_struct.b, 10);
}
TEST(base_test, colorset_struct_normal_init) {
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
TEST(base_test, colorset_struct_make_color_set_init_all_manual) {
  // set all colors manually
  Foxterm::Color_set col_set_struct =
      init_color_set_all(Foxterm::make_rgb(10, 10, 10), Foxterm::make_rgb(10, 10, 10), 10, 10,
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
TEST(base_test, colorset_struct_make_color_set_init_all_generate) {
  // generate 8 bit color automatically
  Foxterm::Color_set col_set_struct =
      init_color_set_all(Foxterm::make_rgb(10, 10, 10), Foxterm::make_rgb(10, 10, 10),
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
TEST(base_test, colorset_struct_make_color_set_init_all_rgb_only) {
  // set only RGB colors
  Foxterm::Color_set col_set_struct =
      Foxterm::init_color_set_all(Foxterm::make_rgb(10, 10, 10), Foxterm::make_rgb(10, 10, 10));
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
  EXPECT_EQ(col_set_struct.colors_available_fg, Foxterm::Colors_available::bit8_24);
  EXPECT_EQ(col_set_struct.colors_available_bg, Foxterm::Colors_available::bit8_24);
}
TEST(base_test, colorset_struct_make_color_set_init_all_4bit_only) {
  // only 4 bit colors
  Foxterm::Color_set col_set_struct = Foxterm::init_color_set_all(Foxterm::Color4_fg::red, Foxterm::Color4_bg::red);
  // 4 bit
  EXPECT_EQ(col_set_struct.bit4_fg, Foxterm::Color4_fg::red);
  EXPECT_EQ(col_set_struct.bit4_bg, Foxterm::Color4_bg::red);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg, Foxterm::Colors_available::bit4);
  EXPECT_EQ(col_set_struct.colors_available_bg, Foxterm::Colors_available::bit4);
}

TEST(base_test, colorset_struct_make_color_set_init_fg_manual) {
  // set all colors manually
  Foxterm::Color_set col_set_struct =
      Foxterm::init_color_set_fg(Foxterm::make_rgb(10, 10, 10), 10, Foxterm::Color4_fg::red);
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
  EXPECT_EQ(col_set_struct.colors_available_bg, Foxterm::Colors_available::none);
}
TEST(base_test, colorset_struct_make_color_set_init_fg_generate) {
  // generate 8 bit color automatically
  Foxterm::Color_set col_set_struct =
      Foxterm::init_color_set_fg(Foxterm::make_rgb(10, 10, 10), Foxterm::Color4_fg::red);
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
  EXPECT_EQ(col_set_struct.colors_available_bg, Foxterm::Colors_available::none);
}
TEST(base_test, colorset_struct_make_color_set_init_fg_rgb_only) {
  // set only RGB colors
  Foxterm::Color_set col_set_struct = Foxterm::init_color_set_fg(Foxterm::make_rgb(10, 10, 10));
  // rgb foreground
  EXPECT_EQ(col_set_struct.rgb_fg.r, 10);
  EXPECT_EQ(col_set_struct.rgb_fg.g, 10);
  EXPECT_EQ(col_set_struct.rgb_fg.b, 10);
  // 8 bit
  EXPECT_EQ(col_set_struct.bit8_fg, 16);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg, Foxterm::Colors_available::bit8_24);
  EXPECT_EQ(col_set_struct.colors_available_bg, Foxterm::Colors_available::none);
}
TEST(base_test, colorset_struct_make_color_set_init_fg_4bit_only) {
  // only 4 bit colors
  Foxterm::Color_set col_set_struct = Foxterm::init_color_set_fg(Foxterm::Color4_fg::red);
  // 4 bit
  EXPECT_EQ(col_set_struct.bit4_fg, Foxterm::Color4_fg::red);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg, Foxterm::Colors_available::bit4);
  EXPECT_EQ(col_set_struct.colors_available_bg, Foxterm::Colors_available::none);
}
TEST(base_test, colorset_struct_make_color_set_init_bg_manual) {
  // set all colors manually
  Foxterm::Color_set col_set_struct =
      Foxterm::init_color_set_bg(Foxterm::make_rgb(10, 10, 10), 10, Foxterm::Color4_bg::red);
  // rgb background
  EXPECT_EQ(col_set_struct.rgb_bg.r, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.g, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.b, 10);
  // 8 bit
  EXPECT_EQ(col_set_struct.bit8_bg, 10);
  // 4 bit
  EXPECT_EQ(col_set_struct.bit4_bg, Foxterm::Color4_bg::red);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg, Foxterm::Colors_available::none);
  EXPECT_EQ(col_set_struct.colors_available_bg, Foxterm::Colors_available::all);
}
TEST(base_test, colorset_struct_make_color_set_init_bg_generate) {
  // generate 8 bit color automatically
  Foxterm::Color_set col_set_struct =
      Foxterm::init_color_set_bg(Foxterm::make_rgb(10, 10, 10), Foxterm::Color4_bg::red);
  // rgb background
  EXPECT_EQ(col_set_struct.rgb_bg.r, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.g, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.b, 10);
  // 8 bit
  EXPECT_EQ(col_set_struct.bit8_bg, 16);
  // 4 bit
  EXPECT_EQ(col_set_struct.bit4_bg, Foxterm::Color4_bg::red);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg, Foxterm::Colors_available::none);
  EXPECT_EQ(col_set_struct.colors_available_bg, Foxterm::Colors_available::all);
}
TEST(base_test, colorset_struct_make_color_set_init_bg_rgb_only) {
  // set only RGB colors
  Foxterm::Color_set col_set_struct = Foxterm::init_color_set_bg(Foxterm::make_rgb(10, 10, 10));
  // rgb background
  EXPECT_EQ(col_set_struct.rgb_bg.r, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.g, 10);
  EXPECT_EQ(col_set_struct.rgb_bg.b, 10);
  // 8 bit
  EXPECT_EQ(col_set_struct.bit8_bg, 16);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg, Foxterm::Colors_available::none);
  EXPECT_EQ(col_set_struct.colors_available_bg, Foxterm::Colors_available::bit8_24);
}
TEST(base_test, colorset_struct_make_color_set_init_bg_4bit_only) {
  // only 4 bit colors
  Foxterm::Color_set col_set_struct = Foxterm::init_color_set_bg(Foxterm::Color4_bg::red);
  // 4 bit
  EXPECT_EQ(col_set_struct.bit4_bg, Foxterm::Color4_bg::red);
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg, Foxterm::Colors_available::none);
  EXPECT_EQ(col_set_struct.colors_available_bg, Foxterm::Colors_available::bit4);
}
TEST(base_test, colorset_struct_make_color_set_init_none) {
  // no colors at all
  Foxterm::Color_set col_set_struct = Foxterm::init_color_set_none();
  // available colors indicator
  EXPECT_EQ(col_set_struct.colors_available_fg, Foxterm::Colors_available::none);
  EXPECT_EQ(col_set_struct.colors_available_bg, Foxterm::Colors_available::none);
}
TEST(base_test, auto_color_all) {
  Foxterm::Color_set col_set =
      Foxterm::init_color_set_all(Foxterm::make_rgb(255, 0, 0), Foxterm::make_rgb(255, 5, 40), 30, 35,
                         Foxterm::Color4_fg::magenta, Foxterm::Color4_bg::yellow);
  if (Foxterm::support_bit24())
    EXPECT_EQ(Foxterm::get_color_auto(col_set), "\033[38;2;255;0;0m\033[48;2;255;5;40m");
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
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit4), "\033[35m\033[43m");
  // overridden to none
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::none), "");
}
TEST(base_test, auto_color_limited_rgb) {
  Foxterm::Color_set col_set =
      Foxterm::init_color_set_all(Foxterm::make_rgb(255, 0, 0), Foxterm::make_rgb(255, 5, 40));
  if (Foxterm::support_bit24())
    EXPECT_EQ(Foxterm::get_color_auto(col_set), "\033[38;2;255;0;0m\033[48;2;255;5;40m");
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
TEST(base_test, auto_color_limited_4bit) {
  Foxterm::Color_set col_set = Foxterm::init_color_set_all(Foxterm::Color4_fg::black, Foxterm::Color4_bg::black);
  EXPECT_EQ(Foxterm::get_color_auto(col_set), "\033[30m\033[40m");
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit24), "\033[30m\033[40m");
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit8), "\033[30m\033[40m");
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit4), "\033[30m\033[40m");
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::none), "");
}
TEST(base_test, auto_color_limited_none) {
  Foxterm::Color_set col_set = Foxterm::init_color_set_none();
  EXPECT_EQ(Foxterm::get_color_auto(col_set), "");
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit24), "");
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit8), "");
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::bit4), "");
  EXPECT_EQ(Foxterm::get_color_auto(col_set, Foxterm::Color_use::none), "");
}
TEST(base_test, hex_to_rgb_conversion)
{
    EXPECT_EQ(Foxterm::convert_hex_rgb("000000").r, Foxterm::make_rgb(0,0,0).r);
    EXPECT_EQ(Foxterm::convert_hex_rgb("000000").g, Foxterm::make_rgb(0,0,0).g);
    EXPECT_EQ(Foxterm::convert_hex_rgb("000000").b, Foxterm::make_rgb(0,0,0).b);

    EXPECT_EQ(Foxterm::convert_hex_rgb("FFFFFF").r, Foxterm::make_rgb(255,255,255).r);
    EXPECT_EQ(Foxterm::convert_hex_rgb("FFFFFF").g, Foxterm::make_rgb(255,255,255).g);
    EXPECT_EQ(Foxterm::convert_hex_rgb("FFFFFF").b, Foxterm::make_rgb(255,255,255).b);

    EXPECT_EQ(Foxterm::convert_hex_rgb("F0AB36").r, Foxterm::make_rgb(15,131,27).r);
    EXPECT_EQ(Foxterm::convert_hex_rgb("F0AB36").g, Foxterm::make_rgb(15,131,27).g);
    EXPECT_EQ(Foxterm::convert_hex_rgb("F0AB36").b, Foxterm::make_rgb(15,131,27).b);

    EXPECT_EQ(Foxterm::convert_hex_rgb("0F21CE").r, Foxterm::make_rgb(15,5,194).r);
    EXPECT_EQ(Foxterm::convert_hex_rgb("0F21CE").g, Foxterm::make_rgb(15,5,194).g);
    EXPECT_EQ(Foxterm::convert_hex_rgb("0F21CE").b, Foxterm::make_rgb(15,5,194).b);

    EXPECT_EQ(Foxterm::convert_hex_rgb("ABCDEF").r, Foxterm::make_rgb(131,181,239).r);
    EXPECT_EQ(Foxterm::convert_hex_rgb("ABCDEF").g, Foxterm::make_rgb(131,181,239).g);
    EXPECT_EQ(Foxterm::convert_hex_rgb("ABCDEF").b, Foxterm::make_rgb(131,181,239).b);

    EXPECT_EQ(Foxterm::convert_hex_rgb("123456").r, Foxterm::make_rgb(5,19,41).r);
    EXPECT_EQ(Foxterm::convert_hex_rgb("123456").g, Foxterm::make_rgb(5,19,41).g);
    EXPECT_EQ(Foxterm::convert_hex_rgb("123456").b, Foxterm::make_rgb(5,19,41).b);

    EXPECT_EQ(Foxterm::convert_hex_rgb("E62169").r, Foxterm::make_rgb(104,5,69).r);
    EXPECT_EQ(Foxterm::convert_hex_rgb("E62169").g, Foxterm::make_rgb(104,5,69).g);
    EXPECT_EQ(Foxterm::convert_hex_rgb("E62169").b, Foxterm::make_rgb(104,5,69).b);

    // test invalid input
    EXPECT_THROW(Foxterm::convert_hex_rgb("GGGGGG"), std::runtime_error);
    EXPECT_THROW(Foxterm::convert_hex_rgb("GFFFFF"), std::runtime_error);
    EXPECT_THROW(Foxterm::convert_hex_rgb("FGFFFF"), std::runtime_error);
    EXPECT_THROW(Foxterm::convert_hex_rgb("FFGFFF"), std::runtime_error);
    EXPECT_THROW(Foxterm::convert_hex_rgb("FFFGFF"), std::runtime_error);
    EXPECT_THROW(Foxterm::convert_hex_rgb("FFFFGF"), std::runtime_error);
    EXPECT_THROW(Foxterm::convert_hex_rgb("FFFFFG"), std::runtime_error);
    EXPECT_THROW(Foxterm::convert_hex_rgb("0000000"), std::runtime_error);
    EXPECT_THROW(Foxterm::convert_hex_rgb("00000"), std::runtime_error);

}
