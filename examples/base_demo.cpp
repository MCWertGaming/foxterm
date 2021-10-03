#include <iostream>
#include <foxterm/color.hpp>
#include <foxterm/color_auto.hpp>
#include <foxterm/convert.hpp>
#include <foxterm/info.hpp>
#include <foxterm/style.hpp>

int main()
{
    std::cout << ".--------------------.\n";
    std::cout << "| FOXTERM COLOR TEST |\n";
    std::cout << "'--------------------'\n";
    std::cout << "\n";

    std::cout << "\nStyles:\n";
    std::cout << "-------\n";
    std::cout << "Supported styles (work on every terminal out there)\n";
    std::cout << Foxterm::get_style(Foxterm::Style::bold) << "bold" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style::dim) << "dim" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style::invert) << "invert" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style::italic) << "italic" << Foxterm::get_style(Foxterm::Style::reset) << '\n';

    std::cout << "\nExtra styles (Work on most terminals)\n";
    std::cout << Foxterm::get_style(Foxterm::Style_extra::hide) << "hide" << Foxterm::get_style(Foxterm::Style::reset) << " (Hidden but revealed)" << Foxterm::get_style(Foxterm::Style_extra::reveal) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_extra::hide) << "hide" << Foxterm::get_style(Foxterm::Style::reset) << " (Hidden and stays like that)" << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_extra::strike) << "strike" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_extra::underline_double) << "underline-double" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_extra::underline) << "underline" << Foxterm::get_style(Foxterm::Style::reset) << '\n';

    std::cout << "\nUnsupported styles (Work barely in terminals, shouldn't be used)\n";
    std::cout << Foxterm::get_style(Foxterm::Style_unsupported::blink_rapid) << "blink-rapid" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_unsupported::blink_slow) << "blink-slow" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_unsupported::encircled) << "encircled" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_unsupported::font_1) << "font-1" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_unsupported::font_2) << "font-2" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_unsupported::font_3) << "font-3" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_unsupported::font_4) << "font-4" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_unsupported::font_5) << "font-5" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_unsupported::font_6) << "font-6" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_unsupported::font_7) << "font-7" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_unsupported::font_8) << "font-8" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_unsupported::font_9) << "font-9" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_unsupported::font_default) << "font-default" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_unsupported::font_fracture) << "font-fracture" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_unsupported::framed) << "framed" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_unsupported::overlined) << "overlined" << Foxterm::get_style(Foxterm::Style::reset) << '\n';
    std::cout << Foxterm::get_style(Foxterm::Style_unsupported::proportional_spacing) << "proportional-spacing" << Foxterm::get_style(Foxterm::Style::reset) << '\n';

    std::cout << "4bit colors\n";
    std::cout << "-----------\n";
    std::cout << Foxterm::get_color4(Foxterm::Color4_fg::black) << "BLACK         " << Foxterm::get_color4(Foxterm::Color4_fg::reset) << " " << Foxterm::get_color4(Foxterm::Color4_bg::black) << "     " << Foxterm::get_color4(Foxterm::Color4_bg::reset) << "\n";
    std::cout << Foxterm::get_color4(Foxterm::Color4_fg::blue) << "BLUE          " << Foxterm::get_color4(Foxterm::Color4_fg::reset) << " " << Foxterm::get_color4(Foxterm::Color4_bg::blue) << "     " << Foxterm::get_color4(Foxterm::Color4_bg::reset) << "\n";
    std::cout << Foxterm::get_color4(Foxterm::Color4_fg::blue_bright) << "BLUE_BRIGHT   " << Foxterm::get_color4(Foxterm::Color4_fg::reset) << " " << Foxterm::get_color4(Foxterm::Color4_bg::blue_bright) << "     " << Foxterm::get_color4(Foxterm::Color4_bg::reset) << "\n";
    std::cout << Foxterm::get_color4(Foxterm::Color4_fg::cyan) << "CYAN          " << Foxterm::get_color4(Foxterm::Color4_fg::reset) << " " << Foxterm::get_color4(Foxterm::Color4_bg::cyan) << "     " << Foxterm::get_color4(Foxterm::Color4_bg::reset) << "\n";
    std::cout << Foxterm::get_color4(Foxterm::Color4_fg::cyan_bright) << "CYAN_BRIGHT   " << Foxterm::get_color4(Foxterm::Color4_fg::reset) << " " << Foxterm::get_color4(Foxterm::Color4_bg::cyan_bright) << "     " << Foxterm::get_color4(Foxterm::Color4_bg::reset) << "\n";
    std::cout << Foxterm::get_color4(Foxterm::Color4_fg::gray) << "GRAY          " << Foxterm::get_color4(Foxterm::Color4_fg::reset) << " " << Foxterm::get_color4(Foxterm::Color4_bg::gray) << "     " << Foxterm::get_color4(Foxterm::Color4_bg::reset) << "\n";
    std::cout << Foxterm::get_color4(Foxterm::Color4_fg::green) << "GREEN         " << Foxterm::get_color4(Foxterm::Color4_fg::reset) << " " << Foxterm::get_color4(Foxterm::Color4_bg::green) << "     " << Foxterm::get_color4(Foxterm::Color4_bg::reset) << "\n";
    std::cout << Foxterm::get_color4(Foxterm::Color4_fg::green_bright) << "GREEN_BRIGHT  " << Foxterm::get_color4(Foxterm::Color4_fg::reset) << " " << Foxterm::get_color4(Foxterm::Color4_bg::green_bright) << "     " << Foxterm::get_color4(Foxterm::Color4_bg::reset) << "\n";
    std::cout << Foxterm::get_color4(Foxterm::Color4_fg::magenta) << "MAGENTA       " << Foxterm::get_color4(Foxterm::Color4_fg::reset) << " " << Foxterm::get_color4(Foxterm::Color4_bg::magenta) << "     " << Foxterm::get_color4(Foxterm::Color4_bg::reset) << "\n";
    std::cout << Foxterm::get_color4(Foxterm::Color4_fg::magenta_bright) << "MAGENTA_BRIGHT" << Foxterm::get_color4(Foxterm::Color4_fg::reset) << " " << Foxterm::get_color4(Foxterm::Color4_bg::magenta_bright) << "     " << Foxterm::get_color4(Foxterm::Color4_bg::reset) << "\n";
    std::cout << Foxterm::get_color4(Foxterm::Color4_fg::red) << "RED           " << Foxterm::get_color4(Foxterm::Color4_fg::reset) << " " << Foxterm::get_color4(Foxterm::Color4_bg::red) << "     " << Foxterm::get_color4(Foxterm::Color4_bg::reset) << "\n";
    std::cout << Foxterm::get_color4(Foxterm::Color4_fg::red_bright) << "RED_BRIGHT    " << Foxterm::get_color4(Foxterm::Color4_fg::reset) << " " << Foxterm::get_color4(Foxterm::Color4_bg::red_bright) << "     " << Foxterm::get_color4(Foxterm::Color4_bg::reset) << "\n";
    std::cout << Foxterm::get_color4(Foxterm::Color4_fg::white) << "WHITE         " << Foxterm::get_color4(Foxterm::Color4_fg::reset) << " " << Foxterm::get_color4(Foxterm::Color4_bg::white) << "     " << Foxterm::get_color4(Foxterm::Color4_bg::reset) << "\n";
    std::cout << Foxterm::get_color4(Foxterm::Color4_fg::white_bright) << "WHITE_BRIGHT  " << Foxterm::get_color4(Foxterm::Color4_fg::reset) << " " << Foxterm::get_color4(Foxterm::Color4_bg::white_bright) << "     " << Foxterm::get_color4(Foxterm::Color4_bg::reset) << "\n";
    std::cout << Foxterm::get_color4(Foxterm::Color4_fg::yellow) << "YELLOW        " << Foxterm::get_color4(Foxterm::Color4_fg::reset) << " " << Foxterm::get_color4(Foxterm::Color4_bg::yellow) << "     " << Foxterm::get_color4(Foxterm::Color4_bg::reset) << "\n";
    std::cout << Foxterm::get_color4(Foxterm::Color4_fg::yellow_bright) << "YELLOW_BRIGHT " << Foxterm::get_color4(Foxterm::Color4_fg::reset) << " " << Foxterm::get_color4(Foxterm::Color4_bg::yellow_bright) << "     " << Foxterm::get_color4(Foxterm::Color4_bg::reset) << "\n";

    std::cout << "\n8bit colors\n";
    std::cout << "-----------\n";
    std::cout << "default colors:\n";
    for(unsigned int i = 0; i < 8; i++) {
        std::cout << Foxterm::get_color8_fg(i) << "O";
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 8; i++) {
        std::cout << Foxterm::get_color8_bg(i) << " ";
    }
    std::cout << Foxterm::reset() << "\ndefault bright colors:\n";
    for(unsigned int i = 8; i < 16; i++) {
        std::cout << Foxterm::get_color8_fg(i) << "O";
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 8; i < 16; i++) {
        std::cout << Foxterm::get_color8_bg(i) << " ";
    }
    std::cout << Foxterm::reset() << "\n8bit colors (216 colors total)\n";
    for(unsigned int i = 16; i < 232; i+=5) {
        std::cout << Foxterm::get_color8_fg(i) << "O";
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 16; i < 232; i+=5) {
        std::cout << Foxterm::get_color8_bg(i) << " ";
    }
    std::cout << Foxterm::reset() << "\nextra grey scale in 24 steps\n";
    for(unsigned int i = 232; i < 255; i++) {
        std::cout << Foxterm::get_color8_fg(i) << "O";
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 232; i < 255; i++) {
        std::cout << Foxterm::get_color8_bg(i) << " ";
    }
    std::cout << Foxterm::reset() << '\n';

    std::cout << "\n24bit colors\n";
    std::cout << "------------\n";

    std::cout << "Does your terminal support 24 bit? ";
    if (Foxterm::support_bit24())
        std::cout << "YES\n";
    else
        std::cout << "NO\n";

    std::cout << "\nFull colors:\n";
    std::cout << Foxterm::get_color24_fg(255, 255, 255) << "WHITE" << Foxterm::get_color24_fg(0, 0, 0) << "BLACK" << Foxterm::get_color24_fg(255, 0, 0) << "RED" << Foxterm::get_color24_fg(0, 255, 0) << "GREEN" << Foxterm::get_color24_fg(0, 0, 255) << "BLUE" << Foxterm::reset() << '\n';
    std::cout << Foxterm::get_color24_bg(255, 255, 255) << "     " << Foxterm::get_color24_bg(0, 0, 0) << "     " << Foxterm::get_color24_bg(255, 0, 0) << "   " << Foxterm::get_color24_bg(0, 255, 0) << "     " << Foxterm::get_color24_bg(0, 0, 255) << "    " << Foxterm::reset() << '\n';

    std::cout << "Colors spectrum:\n";
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color24_bg(i,0,0) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color24_bg(i,i,0) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color24_bg(0,i,0) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color24_bg(0,i,i) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color24_bg(i,i,i) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';

    std::cout << "\n24bit to 8bit conversion\n";
    std::cout << "------------------------\n";
    std::cout << "Full Colors:\n";
    std::cout << "Real:   " << Foxterm::get_color24_fg(255, 255, 255) << "WHITE" << Foxterm::get_color24_fg(0, 0, 0) << "BLACK" << Foxterm::get_color24_fg(255, 0, 0) << "RED" << Foxterm::get_color24_fg(0, 255, 0) << "GREEN" << Foxterm::get_color24_fg(0, 0, 255) << "BLUE" << Foxterm::reset() << '\n';
    std::cout << "Dark:   " << Foxterm::get_color8_fg(Foxterm::convert_bit24_bit8_dark(255, 255, 255)) << "WHITE" << Foxterm::get_color8_fg(Foxterm::convert_bit24_bit8_dark(0, 0,0)) << "BLACK" << Foxterm::get_color8_fg(Foxterm::convert_bit24_bit8_dark(255, 0, 0)) << "RED" << Foxterm::get_color8_fg(Foxterm::convert_bit24_bit8_dark(0, 255, 0)) << "GREEN" << Foxterm::get_color8_fg(Foxterm::convert_bit24_bit8_dark(0, 0, 255)) << "BLUE" << Foxterm::reset() << '\n';
    std::cout << "Bright: " << Foxterm::get_color8_fg(Foxterm::convert_bit24_bit8_bright(255, 255, 255)) << "WHITE" << Foxterm::get_color8_fg(Foxterm::convert_bit24_bit8_bright(0, 0,0)) << "BLACK" << Foxterm::get_color8_fg(Foxterm::convert_bit24_bit8_bright(255, 0, 0)) << "RED" << Foxterm::get_color8_fg(Foxterm::convert_bit24_bit8_bright(0, 255, 0)) << "GREEN" << Foxterm::get_color8_fg(Foxterm::convert_bit24_bit8_bright(0, 0, 255)) << "BLUE" << Foxterm::reset() << '\n';
    
    std::cout << "Color spectrum:\n";
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color24_bg(i,0,0) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color8_bg(Foxterm::convert_bit24_bit8_dark(i,0,0)) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color8_bg(Foxterm::convert_bit24_bit8_bright(i,0,0)) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color24_bg(i,i,0) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color8_bg(Foxterm::convert_bit24_bit8_dark(i,i,0)) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color8_bg(Foxterm::convert_bit24_bit8_bright(i,i,0)) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color24_bg(0,i,0) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color8_bg(Foxterm::convert_bit24_bit8_dark(0,i,0)) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color8_bg(Foxterm::convert_bit24_bit8_bright(0,i,0)) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color24_bg(0,i,i) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color8_bg(Foxterm::convert_bit24_bit8_dark(0,i,i)) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color8_bg(Foxterm::convert_bit24_bit8_bright(0,i,i)) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color24_bg(i,i,i) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color8_bg(Foxterm::convert_bit24_bit8_dark(i,i,i)) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Foxterm::get_color8_bg(Foxterm::convert_bit24_bit8_bright(i,i,i)) << ' ';
    }
    std::cout << Foxterm::reset() << '\n';

    std::cout << "\nUnderline colors (Working on terminals with Style_extra::underline support):\n";
    std::cout << "----------------------------------------------------------------------------\n";
    std::cout << "\n8bit:\n" << Foxterm::get_style(Foxterm::Style_extra::underline);
    for (unsigned int i = 0; i < 256; i+=5)
    {
        std::cout << Foxterm::get_color8_underline(i) << "T";
    }
    std::cout << Foxterm::reset() << "\n24bit:\n" << Foxterm::get_style(Foxterm::Style_extra::underline);
    for (unsigned int i = 0; i < 256; i+=5)
    {
        std::cout << Foxterm::get_color24_underline(i,0,0) << "T";
    }
    std::cout << Foxterm::reset() << "\n24bit:\n" << Foxterm::get_style(Foxterm::Style_extra::underline);
    for (unsigned int i = 0; i < 256; i+=5)
    {
        std::cout << Foxterm::get_color24_underline(i,i,0) << "T";
    }
    std::cout << Foxterm::reset() << "\n24bit:\n" << Foxterm::get_style(Foxterm::Style_extra::underline);
    for (unsigned int i = 0; i < 256; i+=5)
    {
        std::cout << Foxterm::get_color24_underline(0,i,0) << "T";
    }
    std::cout << Foxterm::reset() << "\n24bit:\n" << Foxterm::get_style(Foxterm::Style_extra::underline);
    for (unsigned int i = 0; i < 256; i+=5)
    {
        std::cout << Foxterm::get_color24_underline(0,i,i) << "T";
    }
    std::cout << Foxterm::reset() << "\n24bit:\n" << Foxterm::get_style(Foxterm::Style_extra::underline);
    for (unsigned int i = 0; i < 256; i+=5)
    {
        std::cout << Foxterm::get_color24_underline(i,i,i) << "T";
    }
    std::cout << Foxterm::reset() << '\n';

    std::cout << "\nAutomatic colors\n";
    std::cout << "----------------\n";
    std::cout << "The following lines are printed using the auto color function, loaded with the following colors as values:\n";
    std::cout << "24bit: red color\n";
    std::cout << "8bit:  green color\n";
    std::cout << "4bit:  blue color\n";
    std::cout << "none:  no color\n\n";
    // limiting the lifetime of my_colors
    {
        // create a color set
        Foxterm::Color_set my_colors = Foxterm::init_color_set_fg(Foxterm::make_rgb(255,0,0), Foxterm::convert_bit24_bit8_dark(0,255,0), Foxterm::Color4_fg::blue);

        std::cout << "The following text is colored based on you terminal's supportage: " << get_color_auto(my_colors) << "TEST" << Foxterm::reset() << '\n';
        std::cout << "The following text is colored using an maximum color of 8 bit: " << get_color_auto(my_colors, Foxterm::Color_use::bit8) << "TEST" << Foxterm::reset() << '\n';
        std::cout << "The following text is colored using an maximum color of 4 bit: " << get_color_auto(my_colors, Foxterm::Color_use::bit4) << "TEST" << Foxterm::reset() << '\n';
        std::cout << "The following text is colored using disabled colors (none): " << get_color_auto(my_colors, Foxterm::Color_use::none) << "TEST" << Foxterm::reset() << '\n';
    }
    std::cout << "\nAutomatic colors - a real example\n";
    std::cout << "=================================\n";

    std::cout << "This example takes the RGB values (237|98|14), which is some kind of orange, and Color4_fg::red_bright, which is the closest 4bit color\n";
    std::cout << "The following lines are printed using the autocolor function and generated 8 bit colors\n";
    // limiting the life time of my_colors
    {
        Foxterm::Color_set my_colors = Foxterm::init_color_set_fg(Foxterm::make_rgb(237,98,14), Foxterm::Color4_fg::red_bright);
        std::cout << "The following text is colored based on you terminal's supportage: " << Foxterm::get_color_auto(my_colors) << "TEST" << Foxterm::reset() << '\n';
        std::cout << "The following text is colored using an maximum color of 8 bit: " << Foxterm::get_color_auto(my_colors, Foxterm::Color_use::bit8) << "TEST" << Foxterm::reset() << '\n';
        std::cout << "The following text is colored using an maximum color of 4 bit: " << Foxterm::get_color_auto(my_colors, Foxterm::Color_use::bit4) << "TEST" << Foxterm::reset() << '\n';
        std::cout << "The following text is colored using disabled colors (none): " << Foxterm::get_color_auto(my_colors, Foxterm::Color_use::none) << "TEST" << Foxterm::reset() << '\n';
    }
}
