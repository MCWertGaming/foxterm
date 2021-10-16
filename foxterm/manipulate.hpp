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
    std::string clear_screen_end();
    std::string clear_screen_start();
    std::string clear_screen();
    std::string clear_screen_buffer();
    std::string clear_line_start();
    std::string clear_line_end();
    std::string clear_line();
    std::string scroll_up(uint16_t);
    std::string scroll_down(uint16_t);
    std::string cursor_hvpos(uint16_t, uint16_t);
    std::string serial_port_on();
    std::string serial_port_off();
    // std::string device_status_report();
    std::string cursor_pos_save();
    std::string cursor_pos_restore();
    std::string cursor_hide();
    std::string cursor_show();
    std::string enable_alternative_buffer();
    std::string disable_alternative_buffer();
    std::string enable_backet_paste();
    std::string disable_bracket_paste();


}