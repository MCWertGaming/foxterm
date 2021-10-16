#include "style.hpp"

std::string Foxterm::get_style(Style style) {
  // no parameter is treated as 0
  if (style == Style::reset)
    return "\033[m";
  return "\033[" + std::to_string((int)style) + 'm';
}
std::string Foxterm::get_style(Style_extra style) {
  return "\033[" + std::to_string((int)style) + 'm';
}
std::string Foxterm::get_style(Style_unsupported style) {
  return "\033[" + std::to_string((int)style) + 'm';
}
