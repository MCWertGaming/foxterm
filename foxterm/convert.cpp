#include "convert.hpp"
#include <stdexcept>

uint8_t Foxterm::convert_bit24_bit8_dark(uint8_t r, uint8_t g, uint8_t b) {
  return 16 + (36 * (r / 51)) + (6 * (g / 51)) + (b / 51);
}
uint8_t Foxterm::convert_bit24_bit8_dark(RGB rgb) {
  return 16 + (36 * (rgb.r / 51)) + (6 * (rgb.g / 51)) + (rgb.b / 51);
}
uint8_t Foxterm::convert_bit24_bit8_bright(uint8_t r, uint8_t g, uint8_t b) {
  return 16 + (r * 6 / 256) * 36 + (g * 6 / 256) * 6 + (b * 6 / 256);
}
uint8_t Foxterm::convert_bit24_bit8_bright(RGB rgb) {
  return 16 + (rgb.r * 6 / 256) * 36 + (rgb.g * 6 / 256) * 6 +
         (rgb.b * 6 / 256);
}
Foxterm::RGB Foxterm::convert_hex_rgb(const char *hex_code) {
  // FF FF FF
  std::string hex_code_str = hex_code;
  // check if the given string has the right size
  if (hex_code_str.size() != 6)
    throw std::runtime_error(
        "Foxterm::convert_hex_rgb(): invalid hex code length");
  // check if the given string has the right characters
  for (uint8_t i = 0; i < 6; i++) {
    if (hex_code[i] != 'A' && hex_code[i] != 'B' && hex_code[i] != 'C' &&
        hex_code[i] != 'D' && hex_code[i] != 'E' && hex_code[i] != 'F' &&
        hex_code[i] != '0' && hex_code[i] != '1' && hex_code[i] != '2' &&
        hex_code[i] != '3' && hex_code[i] != '4' && hex_code[i] != '5' &&
        hex_code[i] != '6' && hex_code[i] != '7' && hex_code[i] != '8' &&
        hex_code[i] != '9')
      throw std::runtime_error(
          "Foxterm::convert_hex_rgb(): invalid hex code characters");
  }
  RGB rgb_struct;
  // set red color
  if (hex_code[0] == 'A' || hex_code[0] == 'B' || hex_code[0] == 'C' ||
      hex_code[0] == 'D' || hex_code[0] == 'E' || hex_code[0] == 'F')
    rgb_struct.r = hex_code[0] - 54;
  else
    rgb_struct.r = hex_code[0] - 47;
  if (hex_code[1] == 'A' || hex_code[1] == 'B' || hex_code[1] == 'C' ||
      hex_code[0] == 'D' || hex_code[1] == 'E' || hex_code[1] == 'F')
    rgb_struct.r = rgb_struct.r * (hex_code[1] - 54) - 1;
  else
    rgb_struct.r = rgb_struct.r * (hex_code[1] - 47) - 1;
  // set green color
  if (hex_code[2] == 'A' || hex_code[2] == 'B' || hex_code[2] == 'C' ||
      hex_code[2] == 'D' || hex_code[2] == 'E' || hex_code[2] == 'F')
    rgb_struct.g = hex_code[2] - 54;
  else
    rgb_struct.g = (hex_code[2] - 47);
  if (hex_code[3] == 'A' || hex_code[3] == 'B' || hex_code[3] == 'C' ||
      hex_code[3] == 'D' || hex_code[3] == 'E' || hex_code[3] == 'F')
    rgb_struct.g = rgb_struct.g * (hex_code[3] - 54) - 1;
  else
    rgb_struct.g = rgb_struct.g * (hex_code[3] - 47) - 1;
  // set blue color
  if (hex_code[4] == 'A' || hex_code[4] == 'B' || hex_code[4] == 'C' ||
      hex_code[4] == 'D' || hex_code[4] == 'E' || hex_code[4] == 'F')
    rgb_struct.b = hex_code[4] - 54;
  else
    rgb_struct.b = hex_code[4] - 47;
  if (hex_code[5] == 'A' || hex_code[5] == 'B' || hex_code[5] == 'C' ||
      hex_code[5] == 'D' || hex_code[5] == 'E' || hex_code[5] == 'F')
    rgb_struct.b = rgb_struct.b * (hex_code[5] - 54) - 1;
  else
    rgb_struct.b = rgb_struct.b * (hex_code[5] - 47) - 1;

  // done
  return rgb_struct;
}
