#include "style.hpp"

std::string Foxterm::get_style(Style style) {
  return "\033[" + std::to_string((int)style) + 'm';
}
std::string Foxterm::get_style(Style_extra style) {
  return "\033[" + std::to_string((int)style) + 'm';
}
std::string Foxterm::get_style(Style_unsupported style) {
  return "\033[" + std::to_string((int)style) + 'm';
}
