#include "manipulate.hpp"
#include <iostream>
#include <string>

std::string Fterm::cursor_up(uint16_t rows) {
  if (rows == 1)
    return "\033[A";
  return "\033[" + std::to_string(rows) + 'A';
}
std::string Fterm::cursor_down(uint16_t rows) {
  if (rows == 1)
    return "\033[B";
  return "\033[" + std::to_string(rows) + 'B';
}
std::string Fterm::cursor_forward(uint16_t cols) {
  if (cols == 1)
    return "\033[C";
  return "\033[" + std::to_string(cols) + 'C';
}
std::string Fterm::cursor_backward(uint16_t cols) {
  if (cols == 1)
    return "\033[D";
  return "\033[" + std::to_string(cols) + 'D';
}
std::string Fterm::cursor_down_start(uint16_t lines) {
  if (lines == 1)
    return "\033[E";
  return "\033[" + std::to_string(lines) + 'E';
}
std::string Fterm::cursor_up_start(uint16_t lines) {
  if (lines == 1)
    return "\033[F";
  return "\033[" + std::to_string(lines) + 'F';
}
std::string Fterm::cursor_column(uint16_t column) {
  if (column == 1)
    return "\033[G";
  return "\033[" + std::to_string(column) + 'G';
}
std::string Fterm::cursor_pos(uint16_t row, uint16_t column) {
  if (row == 1 && column == 1)
    return "\033[;H";
  else if (row == 1)
    return "\033[;" + std::to_string(column) + 'H';
  else if (column == 1)
    return "\033[" + std::to_string(row) + ";H";
  else
    return "\033[" + std::to_string(row) + ';' + std::to_string(column) + 'H';
}
const char *Fterm::clear_screen_end() {
  // no value is treated like 0
  return "\033[J";
}
const char *Fterm::clear_screen_start() { return "\033[1J"; }
const char *Fterm::clear_screen() { return "\033[2J"; }
const char *Fterm::clear_screen_buffer() { return "\033[3J"; }
const char *Fterm::clear_line_start() { return "\033[1K"; }
const char *Fterm::clear_line_end() { return "\033[K"; }
const char *Fterm::clear_line() { return "\033[2K"; }
std::string Fterm::scroll_up(uint16_t pages) {
  if (pages == 1)
    return "\033[S";
  return "\033[" + std::to_string(pages) + 'S';
}
std::string Fterm::scroll_down(uint16_t pages) {
  if (pages == 1)
    return "\033[T";
  return "\033[" + std::to_string(pages) + 'T';
}
std::string Fterm::cursor_hvpos(uint16_t row, uint16_t column) {
  if (row == 1 && column == 1)
    return "\033[;f";
  else if (row == 1)
    return "\033[;" + std::to_string(column) + 'f';
  else if (column == 1)
    return "\033[" + std::to_string(row) + ";f";
  else
    return "\033[" + std::to_string(row) + ';' + std::to_string(column) + 'f';
}
const char *Fterm::serial_port_on() { return "\033[5i"; }
const char *Fterm::serial_port_off() { return "\033[4i"; }
const char *Fterm::cursor_pos_save() { return "\033[s"; }
const char *Fterm::cursor_pos_restore() { return "\033[u"; }
const char *Fterm::cursor_hide() { return "\033[?25l"; }
const char *Fterm::cursor_show() { return "\033[?25h"; }
const char *Fterm::enable_alternative_buffer() { return "\033[?1049h"; }
const char *Fterm::disable_alternative_buffer() { return "\033[?1049l"; }
const char *Fterm::enable_backet_paste() { return "\033[?2004h"; }
const char *Fterm::disable_bracket_paste() { return "\033[?2004l"; }

// std::string Fterm::device_status_report();
