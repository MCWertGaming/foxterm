#pragma once
#include "color.hpp"

namespace Foxterm {
// converts a 24 bit color into a close 8 bit one, not 100% accurate but at
// least close
// darker version
uint8_t convert_bit24_bit8_dark(uint8_t, uint8_t, uint8_t);
// converts a 24 bit color into a close 8 bit one, not 100% accurate but at
// least close darker version
uint8_t convert_bit24_bit8_dark(RGB);
// converts a 24 bit color into a close 8 bit one, not 100% accurate but at
// least close brighter version
uint8_t convert_bit24_bit8_bright(uint8_t, uint8_t, uint8_t);
// converts a 24 bit color into a close 8 bit one, not 100% accurate but at
// least close brighter version
uint8_t convert_bit24_bit8_bright(RGB);
// converts a hexadecimal RGB color code to a RGB struct
RGB convert_hex_rgb(const char *);
} // namespace Foxterm
