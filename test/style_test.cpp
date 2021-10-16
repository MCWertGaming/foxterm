#include <foxterm/style.hpp>
#include <gtest/gtest.h>

TEST(style_test, supported) {
  EXPECT_EQ(Fterm::get_style(Fterm::Style::reset), "\033[m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style::bold), "\033[1m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style::dim), "\033[2m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style::disable_bold_dim), "\033[22m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style::disable_invert), "\033[27m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style::disable_italic), "\033[23m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style::invert), "\033[7m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style::italic), "\033[3m");
}
TEST(style_test, extra) {
  EXPECT_EQ(Fterm::get_style(Fterm::Style_extra::hide), "\033[8m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_extra::disable_underline),
            "\033[24m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_extra::dissable_strike),
            "\033[29m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_extra::reveal), "\033[28m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_extra::strike), "\033[9m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_extra::underline), "\033[4m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_extra::underline_double),
            "\033[21m");
}
TEST(style_test, unsupported) {
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::font_1), "\033[11m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::font_2), "\033[12m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::font_3), "\033[13m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::font_4), "\033[14m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::font_5), "\033[15m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::font_6), "\033[16m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::font_7), "\033[17m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::font_8), "\033[18m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::font_9), "\033[19m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::font_default),
            "\033[10m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::blink_rapid),
            "\033[6m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::blink_slow),
            "\033[5m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::disable_blinking),
            "\033[25m");
  EXPECT_EQ(
      Fterm::get_style(Fterm::Style_unsupported::disable_framed_encircled),
      "\033[54m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::disable_overline),
            "\033[55m");
  EXPECT_EQ(Fterm::get_style(
                Fterm::Style_unsupported::disable_proportional_spacing),
            "\033[50m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::encircled),
            "\033[52m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::font_fracture),
            "\033[20m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::framed), "\033[51m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::overlined),
            "\033[53m");
  EXPECT_EQ(
      Fterm::get_style(Fterm::Style_unsupported::proportional_spacing),
      "\033[26m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::ideogram_underline),
            "\033[60m");
  EXPECT_EQ(
      Fterm::get_style(Fterm::Style_unsupported::ideogram_underline_double),
      "\033[61m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::ideogram_overline),
            "\033[62m");
  EXPECT_EQ(
      Fterm::get_style(Fterm::Style_unsupported::ideogram_double_overline),
      "\033[63m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::ideogram_stress),
            "\033[64m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::disable_ideogram),
            "\033[65m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::superscript),
            "\033[73m");
  EXPECT_EQ(Fterm::get_style(Fterm::Style_unsupported::subscript),
            "\033[74m");
  EXPECT_EQ(
      Fterm::get_style(Fterm::Style_unsupported::disable_super_subscript),
      "\033[75m");
}
