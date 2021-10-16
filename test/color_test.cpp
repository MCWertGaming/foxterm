#include <foxterm/color.hpp>
#include <gtest/gtest.h>

TEST(color_test, reset) { EXPECT_STREQ(Fterm::reset(), "\033[m"); }

TEST(color_test, 4bit_color_test) {
  // foreground
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_fg::black), "\033[30m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_fg::blue), "\033[34m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_fg::blue_bright), "\033[94m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_fg::cyan), "\033[36m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_fg::cyan_bright), "\033[96m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_fg::gray), "\033[90m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_fg::green), "\033[32m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_fg::green_bright), "\033[92m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_fg::magenta), "\033[35m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_fg::magenta_bright),
            "\033[95m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_fg::red), "\033[31m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_fg::red_bright), "\033[91m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_fg::reset), "\033[39m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_fg::white), "\033[37m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_fg::white_bright), "\033[97m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_fg::yellow), "\033[33m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_fg::yellow_bright), "\033[93m");
  // background
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_bg::black), "\033[40m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_bg::blue), "\033[44m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_bg::blue_bright), "\033[104m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_bg::cyan), "\033[46m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_bg::cyan_bright), "\033[106m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_bg::gray), "\033[100m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_bg::green), "\033[42m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_bg::green_bright), "\033[102m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_bg::magenta), "\033[45m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_bg::magenta_bright),
            "\033[105m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_bg::red), "\033[41m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_bg::red_bright), "\033[101m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_bg::reset), "\033[49m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_bg::white), "\033[47m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_bg::white_bright), "\033[107m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_bg::yellow), "\033[43m");
  EXPECT_EQ(Fterm::get_color4(Fterm::Color4_bg::yellow_bright),
            "\033[103m");
}
TEST(color_test, 8bit_colors) {
  // foreground
  EXPECT_EQ(Fterm::get_color8_fg(0), "\033[38;5;0m");
  EXPECT_EQ(Fterm::get_color8_fg(10), "\033[38;5;10m");
  EXPECT_EQ(Fterm::get_color8_fg(255), "\033[38;5;255m");
  EXPECT_EQ(Fterm::get_color8_fg(99), "\033[38;5;99m");
  // background
  EXPECT_EQ(Fterm::get_color8_bg(0), "\033[48;5;0m");
  EXPECT_EQ(Fterm::get_color8_bg(10), "\033[48;5;10m");
  EXPECT_EQ(Fterm::get_color8_bg(255), "\033[48;5;255m");
  EXPECT_EQ(Fterm::get_color8_bg(99), "\033[48;5;99m");
  // underline
  EXPECT_EQ(Fterm::get_color8_underline(0), "\033[58;5;0m");
  EXPECT_EQ(Fterm::get_color8_underline(255), "\033[58;5;255m");
  EXPECT_EQ(Fterm::get_color8_underline(30), "\033[58;5;30m");
}
TEST(color_test, 24bit_colors) {
  // foreground
  EXPECT_EQ(Fterm::get_color24_fg(0, 0, 0), "\033[38;2;0;0;0m");
  EXPECT_EQ(Fterm::get_color24_fg(255, 255, 255), "\033[38;2;255;255;255m");
  EXPECT_EQ(Fterm::get_color24_fg(20, 20, 20), "\033[38;2;20;20;20m");
  EXPECT_EQ(Fterm::get_color24_fg(3, 4, 5), "\033[38;2;3;4;5m");
  // background
  EXPECT_EQ(Fterm::get_color24_bg(0, 0, 0), "\033[48;2;0;0;0m");
  EXPECT_EQ(Fterm::get_color24_bg(255, 255, 255), "\033[48;2;255;255;255m");
  EXPECT_EQ(Fterm::get_color24_bg(20, 20, 20), "\033[48;2;20;20;20m");
  EXPECT_EQ(Fterm::get_color24_bg(3, 4, 5), "\033[48;2;3;4;5m");
  // underline
  EXPECT_EQ(Fterm::get_color24_underline(0, 0, 0), "\033[58;2;0;0;0m");
  EXPECT_EQ(Fterm::get_color24_underline(255, 255, 255),
            "\033[58;2;255;255;255m");
  EXPECT_EQ(Fterm::get_color24_underline(20, 20, 20), "\033[58;2;20;20;20m");
  EXPECT_EQ(Fterm::get_color24_underline(3, 4, 5), "\033[58;2;3;4;5m");
}
TEST(color_test, 24bit_colors_struct) {
  // foreground
  EXPECT_EQ(Fterm::get_color24_fg(Fterm::make_rgb(0, 0, 0)),
            "\033[38;2;0;0;0m");
  EXPECT_EQ(Fterm::get_color24_fg(Fterm::make_rgb(255, 255, 255)),
            "\033[38;2;255;255;255m");
  EXPECT_EQ(Fterm::get_color24_fg(Fterm::make_rgb(20, 20, 20)),
            "\033[38;2;20;20;20m");
  EXPECT_EQ(Fterm::get_color24_fg(Fterm::make_rgb(3, 4, 5)),
            "\033[38;2;3;4;5m");
  // background
  EXPECT_EQ(Fterm::get_color24_bg(Fterm::make_rgb(0, 0, 0)),
            "\033[48;2;0;0;0m");
  EXPECT_EQ(Fterm::get_color24_bg(Fterm::make_rgb(255, 255, 255)),
            "\033[48;2;255;255;255m");
  EXPECT_EQ(Fterm::get_color24_bg(Fterm::make_rgb(20, 20, 20)),
            "\033[48;2;20;20;20m");
  EXPECT_EQ(Fterm::get_color24_bg(Fterm::make_rgb(3, 4, 5)),
            "\033[48;2;3;4;5m");
  // underline
  EXPECT_EQ(Fterm::get_color24_underline(Fterm::make_rgb(0, 0, 0)),
            "\033[58;2;0;0;0m");
  EXPECT_EQ(Fterm::get_color24_underline(Fterm::make_rgb(255, 255, 255)),
            "\033[58;2;255;255;255m");
  EXPECT_EQ(Fterm::get_color24_underline(Fterm::make_rgb(20, 20, 20)),
            "\033[58;2;20;20;20m");
  EXPECT_EQ(Fterm::get_color24_underline(Fterm::make_rgb(3, 4, 5)),
            "\033[58;2;3;4;5m");
}
