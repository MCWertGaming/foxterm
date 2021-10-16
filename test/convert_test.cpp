#include <foxterm/convert.hpp>
#include <gtest/gtest.h>

TEST(convert_test, 8bit_conversion) {
  // foreground dark
  EXPECT_EQ(Fterm::get_color8_fg(Fterm::convert_bit24_bit8_dark(0, 0, 0)),
            "\033[38;5;16m");
  EXPECT_EQ(
      Fterm::get_color8_fg(Fterm::convert_bit24_bit8_dark(255, 255, 255)),
      "\033[38;5;231m");
  EXPECT_EQ(Fterm::get_color8_fg(Fterm::convert_bit24_bit8_dark(0, 255, 0)),
            "\033[38;5;46m");
  // background dark
  EXPECT_EQ(Fterm::get_color8_bg(Fterm::convert_bit24_bit8_dark(0, 0, 0)),
            "\033[48;5;16m");
  EXPECT_EQ(
      Fterm::get_color8_bg(Fterm::convert_bit24_bit8_dark(255, 255, 255)),
      "\033[48;5;231m");
  EXPECT_EQ(Fterm::get_color8_bg(Fterm::convert_bit24_bit8_dark(0, 255, 0)),
            "\033[48;5;46m");
  // foreground bright
  EXPECT_EQ(Fterm::get_color8_fg(Fterm::convert_bit24_bit8_bright(0, 0, 0)),
            "\033[38;5;16m");
  EXPECT_EQ(
      Fterm::get_color8_fg(Fterm::convert_bit24_bit8_bright(255, 255, 255)),
      "\033[38;5;231m");
  EXPECT_EQ(
      Fterm::get_color8_fg(Fterm::convert_bit24_bit8_bright(0, 255, 0)),
      "\033[38;5;46m");
  // background dark
  EXPECT_EQ(Fterm::get_color8_bg(Fterm::convert_bit24_bit8_bright(0, 0, 0)),
            "\033[48;5;16m");
  EXPECT_EQ(
      Fterm::get_color8_bg(Fterm::convert_bit24_bit8_bright(255, 255, 255)),
      "\033[48;5;231m");
  EXPECT_EQ(
      Fterm::get_color8_bg(Fterm::convert_bit24_bit8_bright(0, 255, 0)),
      "\033[48;5;46m");
}
TEST(convert_test, 8bit_conversion_struct) {
  // foreground dark
  EXPECT_EQ(Fterm::get_color8_fg(
                convert_bit24_bit8_dark(Fterm::make_rgb(0, 0, 0))),
            "\033[38;5;16m");
  EXPECT_EQ(Fterm::get_color8_fg(
                convert_bit24_bit8_dark(Fterm::make_rgb(255, 255, 255))),
            "\033[38;5;231m");
  EXPECT_EQ(Fterm::get_color8_fg(
                convert_bit24_bit8_dark(Fterm::make_rgb(0, 255, 0))),
            "\033[38;5;46m");
  // background dark
  EXPECT_EQ(Fterm::get_color8_bg(
                convert_bit24_bit8_dark(Fterm::make_rgb(0, 0, 0))),
            "\033[48;5;16m");
  EXPECT_EQ(Fterm::get_color8_bg(
                convert_bit24_bit8_dark(Fterm::make_rgb(255, 255, 255))),
            "\033[48;5;231m");
  EXPECT_EQ(Fterm::get_color8_bg(
                convert_bit24_bit8_dark(Fterm::make_rgb(0, 255, 0))),
            "\033[48;5;46m");
  // foreground bright
  EXPECT_EQ(Fterm::get_color8_fg(
                convert_bit24_bit8_bright(Fterm::make_rgb(0, 0, 0))),
            "\033[38;5;16m");
  EXPECT_EQ(Fterm::get_color8_fg(
                convert_bit24_bit8_bright(Fterm::make_rgb(255, 255, 255))),
            "\033[38;5;231m");
  EXPECT_EQ(Fterm::get_color8_fg(
                convert_bit24_bit8_bright(Fterm::make_rgb(0, 255, 0))),
            "\033[38;5;46m");
  // background dark
  EXPECT_EQ(Fterm::get_color8_bg(
                convert_bit24_bit8_bright(Fterm::make_rgb(0, 0, 0))),
            "\033[48;5;16m");
  EXPECT_EQ(Fterm::get_color8_bg(
                convert_bit24_bit8_bright(Fterm::make_rgb(255, 255, 255))),
            "\033[48;5;231m");
  EXPECT_EQ(Fterm::get_color8_bg(
                convert_bit24_bit8_bright(Fterm::make_rgb(0, 255, 0))),
            "\033[48;5;46m");
}
TEST(convert_test, hex_to_rgb_conversion) {
  EXPECT_EQ(Fterm::convert_hex_rgb("000000").r, Fterm::make_rgb(0, 0, 0).r);
  EXPECT_EQ(Fterm::convert_hex_rgb("000000").g, Fterm::make_rgb(0, 0, 0).g);
  EXPECT_EQ(Fterm::convert_hex_rgb("000000").b, Fterm::make_rgb(0, 0, 0).b);

  EXPECT_EQ(Fterm::convert_hex_rgb("FFFFFF").r,
            Fterm::make_rgb(255, 255, 255).r);
  EXPECT_EQ(Fterm::convert_hex_rgb("FFFFFF").g,
            Fterm::make_rgb(255, 255, 255).g);
  EXPECT_EQ(Fterm::convert_hex_rgb("FFFFFF").b,
            Fterm::make_rgb(255, 255, 255).b);

  EXPECT_EQ(Fterm::convert_hex_rgb("F0AB36").r,
            Fterm::make_rgb(15, 131, 27).r);
  EXPECT_EQ(Fterm::convert_hex_rgb("F0AB36").g,
            Fterm::make_rgb(15, 131, 27).g);
  EXPECT_EQ(Fterm::convert_hex_rgb("F0AB36").b,
            Fterm::make_rgb(15, 131, 27).b);

  EXPECT_EQ(Fterm::convert_hex_rgb("0F21CE").r,
            Fterm::make_rgb(15, 5, 194).r);
  EXPECT_EQ(Fterm::convert_hex_rgb("0F21CE").g,
            Fterm::make_rgb(15, 5, 194).g);
  EXPECT_EQ(Fterm::convert_hex_rgb("0F21CE").b,
            Fterm::make_rgb(15, 5, 194).b);

  EXPECT_EQ(Fterm::convert_hex_rgb("ABCDEF").r,
            Fterm::make_rgb(131, 181, 239).r);
  EXPECT_EQ(Fterm::convert_hex_rgb("ABCDEF").g,
            Fterm::make_rgb(131, 181, 239).g);
  EXPECT_EQ(Fterm::convert_hex_rgb("ABCDEF").b,
            Fterm::make_rgb(131, 181, 239).b);

  EXPECT_EQ(Fterm::convert_hex_rgb("123456").r,
            Fterm::make_rgb(5, 19, 41).r);
  EXPECT_EQ(Fterm::convert_hex_rgb("123456").g,
            Fterm::make_rgb(5, 19, 41).g);
  EXPECT_EQ(Fterm::convert_hex_rgb("123456").b,
            Fterm::make_rgb(5, 19, 41).b);

  EXPECT_EQ(Fterm::convert_hex_rgb("E62169").r,
            Fterm::make_rgb(104, 5, 69).r);
  EXPECT_EQ(Fterm::convert_hex_rgb("E62169").g,
            Fterm::make_rgb(104, 5, 69).g);
  EXPECT_EQ(Fterm::convert_hex_rgb("E62169").b,
            Fterm::make_rgb(104, 5, 69).b);

  // test invalid input
  EXPECT_THROW(Fterm::convert_hex_rgb("GGGGGG"), std::runtime_error);
  EXPECT_THROW(Fterm::convert_hex_rgb("GFFFFF"), std::runtime_error);
  EXPECT_THROW(Fterm::convert_hex_rgb("FGFFFF"), std::runtime_error);
  EXPECT_THROW(Fterm::convert_hex_rgb("FFGFFF"), std::runtime_error);
  EXPECT_THROW(Fterm::convert_hex_rgb("FFFGFF"), std::runtime_error);
  EXPECT_THROW(Fterm::convert_hex_rgb("FFFFGF"), std::runtime_error);
  EXPECT_THROW(Fterm::convert_hex_rgb("FFFFFG"), std::runtime_error);
  EXPECT_THROW(Fterm::convert_hex_rgb("0000000"), std::runtime_error);
  EXPECT_THROW(Fterm::convert_hex_rgb("00000"), std::runtime_error);
}
