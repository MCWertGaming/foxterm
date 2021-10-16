#pragma once
#include <string>

namespace Foxterm {
std::string cursor_up(uint16_t);
std::string cursor_down(uint16_t);
std::string cursor_forward(uint16_t);
std::string cursor_backward(uint16_t);
std::string cursor_down_start(uint16_t);
std::string cursor_up_start(uint16_t);
std::string cursor_column(uint16_t);
std::string cursor_pos(uint16_t, uint16_t);
const char *clear_screen_end();
const char *clear_screen_start();
const char *clear_screen();
const char *clear_screen_buffer();
const char *clear_line_start();
const char *clear_line_end();
const char *clear_line();
std::string scroll_up(uint16_t);
std::string scroll_down(uint16_t);
std::string cursor_hvpos(uint16_t, uint16_t);
const char *serial_port_on();
const char *serial_port_off();
// std::string device_status_report();
const char *cursor_pos_save();
const char *cursor_pos_restore();
const char *cursor_hide();
const char *cursor_show();
const char *enable_alternative_buffer();
const char *disable_alternative_buffer();
const char *enable_backet_paste();
const char *disable_bracket_paste();

} // namespace Foxterm
