#include "color.hpp"

Foxterm::RGB Foxterm::make_rgb(uint8_t r, uint8_t g, uint8_t b) {
  return RGB{r, g, b};
}

std::string Foxterm::get_color4(Color4_bg color) {
  return "\033[" + std::to_string((int)color) + 'm';
}

std::string Foxterm::get_color4(Color4_fg color) {
  return "\033[" + std::to_string((int)color) + 'm';
}

const char *Foxterm::reset() { return "\033[m"; }

std::string Foxterm::get_color8_fg(uint8_t color) {
  return "\033[38;5;" + std::to_string(color) + 'm';
}

std::string Foxterm::get_color8_bg(uint8_t color) {
  return "\033[48;5;" + std::to_string(color) + 'm';
}

std::string Foxterm::get_color8_underline(uint8_t color) {
  return "\033[58;5;" + std::to_string(color) + 'm';
}

std::string Foxterm::get_color24_fg(uint8_t r, uint8_t g, uint8_t b) {
  return "\033[38;2;" + std::to_string(r) + ';' + std::to_string(g) + ';' +
         std::to_string(b) + 'm';
}

std::string Foxterm::get_color24_fg(RGB rgb) {
  return "\033[38;2;" + std::to_string(rgb.r) + ';' + std::to_string(rgb.g) +
         ';' + std::to_string(rgb.b) + 'm';
}

std::string Foxterm::get_color24_bg(uint8_t r, uint8_t g, uint8_t b) {
  return "\033[48;2;" + std::to_string(r) + ';' + std::to_string(g) + ';' +
         std::to_string(b) + 'm';
}

std::string Foxterm::get_color24_bg(RGB rgb) {
  return "\033[48;2;" + std::to_string(rgb.r) + ';' + std::to_string(rgb.g) +
         ';' + std::to_string(rgb.b) + 'm';
}

std::string Foxterm::get_color24_underline(uint8_t r, uint8_t g, uint8_t b) {
  return "\033[58;2;" + std::to_string(r) + ';' + std::to_string(g) + ';' +
         std::to_string(b) + 'm';
}
std::string Foxterm::get_color24_underline(RGB rgb) {
  return "\033[58;2;" + std::to_string(rgb.r) + ';' + std::to_string(rgb.g) +
         ';' + std::to_string(rgb.b) + 'm';
}
