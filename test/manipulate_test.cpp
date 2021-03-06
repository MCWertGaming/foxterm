#include <foxterm/manipulate.hpp>
#include <gtest/gtest.h>

TEST(manipulate_test, cursor_up) {
  EXPECT_EQ(Fterm::cursor_up(1), "\033[A");
  EXPECT_EQ(Fterm::cursor_up(3), "\033[3A");
  EXPECT_EQ(Fterm::cursor_up(99), "\033[99A");
}
TEST(manipulate_test, cursor_down) {
  EXPECT_EQ(Fterm::cursor_down(1), "\033[B");
  EXPECT_EQ(Fterm::cursor_down(3), "\033[3B");
  EXPECT_EQ(Fterm::cursor_down(99), "\033[99B");
}
TEST(manipulate_test, cursor_forward) {
  EXPECT_EQ(Fterm::cursor_forward(1), "\033[C");
  EXPECT_EQ(Fterm::cursor_forward(3), "\033[3C");
  EXPECT_EQ(Fterm::cursor_forward(99), "\033[99C");
}
TEST(manipulate_test, cursor_backward) {
  EXPECT_EQ(Fterm::cursor_backward(1), "\033[D");
  EXPECT_EQ(Fterm::cursor_backward(3), "\033[3D");
  EXPECT_EQ(Fterm::cursor_backward(99), "\033[99D");
}
TEST(manipulate_test, cursor_down_start) {
  EXPECT_EQ(Fterm::cursor_down_start(1), "\033[E");
  EXPECT_EQ(Fterm::cursor_down_start(3), "\033[3E");
  EXPECT_EQ(Fterm::cursor_down_start(99), "\033[99E");
}
TEST(manipulate_test, cursor_up_start) {
  EXPECT_EQ(Fterm::cursor_up_start(1), "\033[F");
  EXPECT_EQ(Fterm::cursor_up_start(3), "\033[3F");
  EXPECT_EQ(Fterm::cursor_up_start(99), "\033[99F");
}
TEST(manipulate_test, cursor_column) {
  EXPECT_EQ(Fterm::cursor_column(1), "\033[G");
  EXPECT_EQ(Fterm::cursor_column(3), "\033[3G");
  EXPECT_EQ(Fterm::cursor_column(99), "\033[99G");
}
TEST(manipulate_test, cursor_pos) {
  EXPECT_EQ(Fterm::cursor_pos(1, 1), "\033[;H");
  EXPECT_EQ(Fterm::cursor_pos(1, 2), "\033[;2H");
  EXPECT_EQ(Fterm::cursor_pos(2, 1), "\033[2;H");
  EXPECT_EQ(Fterm::cursor_pos(2, 2), "\033[2;2H");
  EXPECT_EQ(Fterm::cursor_pos(9, 5), "\033[9;5H");
}
TEST(manipulate_test, cursor_hvpos) {
  EXPECT_EQ(Fterm::cursor_hvpos(1, 1), "\033[;f");
  EXPECT_EQ(Fterm::cursor_hvpos(1, 2), "\033[;2f");
  EXPECT_EQ(Fterm::cursor_hvpos(2, 1), "\033[2;f");
  EXPECT_EQ(Fterm::cursor_hvpos(2, 2), "\033[2;2f");
  EXPECT_EQ(Fterm::cursor_hvpos(9, 5), "\033[9;5f");
}
TEST(manipulate_test, clear_line) {
  EXPECT_STREQ(Fterm::clear_line_end(), "\033[K");
  EXPECT_STREQ(Fterm::clear_line_start(), "\033[1K");
  EXPECT_STREQ(Fterm::clear_line(), "\033[2K");
}
TEST(manipulate_test, clear_screen) {
  EXPECT_STREQ(Fterm::clear_screen_end(), "\033[J");
  EXPECT_STREQ(Fterm::clear_screen_start(), "\033[1J");
  EXPECT_STREQ(Fterm::clear_screen(), "\033[2J");
  EXPECT_STREQ(Fterm::clear_screen_buffer(), "\033[3J");
}
TEST(manipulate_test, scroll_up) {
  EXPECT_EQ(Fterm::scroll_up(1), "\033[S");
  EXPECT_EQ(Fterm::scroll_up(3), "\033[3S");
  EXPECT_EQ(Fterm::scroll_up(99), "\033[99S");
}
TEST(manipulate_test, scroll_down) {
  EXPECT_EQ(Fterm::scroll_down(1), "\033[T");
  EXPECT_EQ(Fterm::scroll_down(3), "\033[3T");
  EXPECT_EQ(Fterm::scroll_down(99), "\033[99T");
}
TEST(manipulate_test, aux_port) {
  EXPECT_STREQ(Fterm::serial_port_on(), "\033[5i");
  EXPECT_STREQ(Fterm::serial_port_off(), "\033[4i");
}
