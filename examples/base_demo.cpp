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
    std::cout << Fterm::get_style(Fterm::Style::bold) << "bold" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style::dim) << "dim" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style::invert) << "invert" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style::italic) << "italic" << Fterm::get_style(Fterm::Style::reset) << '\n';

    std::cout << "\nExtra styles (Work on most terminals)\n";
    std::cout << Fterm::get_style(Fterm::Style_extra::hide) << "hide" << Fterm::get_style(Fterm::Style::reset) << " (Hidden but revealed)" << Fterm::get_style(Fterm::Style_extra::reveal) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_extra::hide) << "hide" << Fterm::get_style(Fterm::Style::reset) << " (Hidden and stays like that)" << '\n';
    std::cout << Fterm::get_style(Fterm::Style_extra::strike) << "strike" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_extra::underline_double) << "underline-double" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_extra::underline) << "underline" << Fterm::get_style(Fterm::Style::reset) << '\n';

    std::cout << "\nUnsupported styles (Work barely in terminals, shouldn't be used)\n";
    std::cout << Fterm::get_style(Fterm::Style_unsupported::blink_rapid) << "blink-rapid" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::blink_slow) << "blink-slow" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::encircled) << "encircled" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::font_1) << "font-1" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::font_2) << "font-2" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::font_3) << "font-3" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::font_4) << "font-4" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::font_5) << "font-5" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::font_6) << "font-6" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::font_7) << "font-7" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::font_8) << "font-8" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::font_9) << "font-9" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::font_default) << "font-default" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::font_fracture) << "font-fracture" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::framed) << "framed" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::overlined) << "overlined" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::proportional_spacing) << "proportional-spacing" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::ideogram_double_overline) << "ideogram_double_overline" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::ideogram_overline) << "ideogram_overline" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::ideogram_stress) << "ideogram_stress" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::ideogram_underline) << "ideogram_underline" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::ideogram_underline_double) << "ideogram_underline_double" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::subscript) << "subscript" << Fterm::get_style(Fterm::Style::reset) << '\n';
    std::cout << Fterm::get_style(Fterm::Style_unsupported::superscript) << "superscript" << Fterm::get_style(Fterm::Style::reset) << '\n';

    std::cout << "\n4bit colors\n";
    std::cout << "-----------\n";
    std::cout << Fterm::get_color4(Fterm::Color4_fg::black) << "BLACK         " << Fterm::get_color4(Fterm::Color4_fg::reset) << " " << Fterm::get_color4(Fterm::Color4_bg::black) << "     " << Fterm::get_color4(Fterm::Color4_bg::reset) << "\n";
    std::cout << Fterm::get_color4(Fterm::Color4_fg::blue) << "BLUE          " << Fterm::get_color4(Fterm::Color4_fg::reset) << " " << Fterm::get_color4(Fterm::Color4_bg::blue) << "     " << Fterm::get_color4(Fterm::Color4_bg::reset) << "\n";
    std::cout << Fterm::get_color4(Fterm::Color4_fg::blue_bright) << "BLUE_BRIGHT   " << Fterm::get_color4(Fterm::Color4_fg::reset) << " " << Fterm::get_color4(Fterm::Color4_bg::blue_bright) << "     " << Fterm::get_color4(Fterm::Color4_bg::reset) << "\n";
    std::cout << Fterm::get_color4(Fterm::Color4_fg::cyan) << "CYAN          " << Fterm::get_color4(Fterm::Color4_fg::reset) << " " << Fterm::get_color4(Fterm::Color4_bg::cyan) << "     " << Fterm::get_color4(Fterm::Color4_bg::reset) << "\n";
    std::cout << Fterm::get_color4(Fterm::Color4_fg::cyan_bright) << "CYAN_BRIGHT   " << Fterm::get_color4(Fterm::Color4_fg::reset) << " " << Fterm::get_color4(Fterm::Color4_bg::cyan_bright) << "     " << Fterm::get_color4(Fterm::Color4_bg::reset) << "\n";
    std::cout << Fterm::get_color4(Fterm::Color4_fg::gray) << "GRAY          " << Fterm::get_color4(Fterm::Color4_fg::reset) << " " << Fterm::get_color4(Fterm::Color4_bg::gray) << "     " << Fterm::get_color4(Fterm::Color4_bg::reset) << "\n";
    std::cout << Fterm::get_color4(Fterm::Color4_fg::green) << "GREEN         " << Fterm::get_color4(Fterm::Color4_fg::reset) << " " << Fterm::get_color4(Fterm::Color4_bg::green) << "     " << Fterm::get_color4(Fterm::Color4_bg::reset) << "\n";
    std::cout << Fterm::get_color4(Fterm::Color4_fg::green_bright) << "GREEN_BRIGHT  " << Fterm::get_color4(Fterm::Color4_fg::reset) << " " << Fterm::get_color4(Fterm::Color4_bg::green_bright) << "     " << Fterm::get_color4(Fterm::Color4_bg::reset) << "\n";
    std::cout << Fterm::get_color4(Fterm::Color4_fg::magenta) << "MAGENTA       " << Fterm::get_color4(Fterm::Color4_fg::reset) << " " << Fterm::get_color4(Fterm::Color4_bg::magenta) << "     " << Fterm::get_color4(Fterm::Color4_bg::reset) << "\n";
    std::cout << Fterm::get_color4(Fterm::Color4_fg::magenta_bright) << "MAGENTA_BRIGHT" << Fterm::get_color4(Fterm::Color4_fg::reset) << " " << Fterm::get_color4(Fterm::Color4_bg::magenta_bright) << "     " << Fterm::get_color4(Fterm::Color4_bg::reset) << "\n";
    std::cout << Fterm::get_color4(Fterm::Color4_fg::red) << "RED           " << Fterm::get_color4(Fterm::Color4_fg::reset) << " " << Fterm::get_color4(Fterm::Color4_bg::red) << "     " << Fterm::get_color4(Fterm::Color4_bg::reset) << "\n";
    std::cout << Fterm::get_color4(Fterm::Color4_fg::red_bright) << "RED_BRIGHT    " << Fterm::get_color4(Fterm::Color4_fg::reset) << " " << Fterm::get_color4(Fterm::Color4_bg::red_bright) << "     " << Fterm::get_color4(Fterm::Color4_bg::reset) << "\n";
    std::cout << Fterm::get_color4(Fterm::Color4_fg::white) << "WHITE         " << Fterm::get_color4(Fterm::Color4_fg::reset) << " " << Fterm::get_color4(Fterm::Color4_bg::white) << "     " << Fterm::get_color4(Fterm::Color4_bg::reset) << "\n";
    std::cout << Fterm::get_color4(Fterm::Color4_fg::white_bright) << "WHITE_BRIGHT  " << Fterm::get_color4(Fterm::Color4_fg::reset) << " " << Fterm::get_color4(Fterm::Color4_bg::white_bright) << "     " << Fterm::get_color4(Fterm::Color4_bg::reset) << "\n";
    std::cout << Fterm::get_color4(Fterm::Color4_fg::yellow) << "YELLOW        " << Fterm::get_color4(Fterm::Color4_fg::reset) << " " << Fterm::get_color4(Fterm::Color4_bg::yellow) << "     " << Fterm::get_color4(Fterm::Color4_bg::reset) << "\n";
    std::cout << Fterm::get_color4(Fterm::Color4_fg::yellow_bright) << "YELLOW_BRIGHT " << Fterm::get_color4(Fterm::Color4_fg::reset) << " " << Fterm::get_color4(Fterm::Color4_bg::yellow_bright) << "     " << Fterm::get_color4(Fterm::Color4_bg::reset) << "\n";

    std::cout << "\n8bit colors\n";
    std::cout << "-----------\n";
    std::cout << "default colors:\n";
    for(unsigned int i = 0; i < 8; i++) {
        std::cout << Fterm::get_color8_fg(i) << "O";
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 8; i++) {
        std::cout << Fterm::get_color8_bg(i) << " ";
    }
    std::cout << Fterm::reset() << "\ndefault bright colors:\n";
    for(unsigned int i = 8; i < 16; i++) {
        std::cout << Fterm::get_color8_fg(i) << "O";
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 8; i < 16; i++) {
        std::cout << Fterm::get_color8_bg(i) << " ";
    }
    std::cout << Fterm::reset() << "\n8bit colors (216 colors total)\n";
    for(unsigned int i = 16; i < 232; i+=5) {
        std::cout << Fterm::get_color8_fg(i) << "O";
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 16; i < 232; i+=5) {
        std::cout << Fterm::get_color8_bg(i) << " ";
    }
    std::cout << Fterm::reset() << "\nextra grey scale in 24 steps\n";
    for(unsigned int i = 232; i < 255; i++) {
        std::cout << Fterm::get_color8_fg(i) << "O";
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 232; i < 255; i++) {
        std::cout << Fterm::get_color8_bg(i) << " ";
    }
    std::cout << Fterm::reset() << '\n';

    std::cout << "\n24bit colors\n";
    std::cout << "------------\n";

    std::cout << "Does your terminal support 24 bit? ";
    if (Fterm::support_bit24())
        std::cout << "YES\n";
    else
        std::cout << "NO\n";

    std::cout << "\nFull colors:\n";
    std::cout << Fterm::get_color24_fg(255, 255, 255) << "WHITE" << Fterm::get_color24_fg(0, 0, 0) << "BLACK" << Fterm::get_color24_fg(255, 0, 0) << "RED" << Fterm::get_color24_fg(0, 255, 0) << "GREEN" << Fterm::get_color24_fg(0, 0, 255) << "BLUE" << Fterm::reset() << '\n';
    std::cout << Fterm::get_color24_bg(255, 255, 255) << "     " << Fterm::get_color24_bg(0, 0, 0) << "     " << Fterm::get_color24_bg(255, 0, 0) << "   " << Fterm::get_color24_bg(0, 255, 0) << "     " << Fterm::get_color24_bg(0, 0, 255) << "    " << Fterm::reset() << '\n';

    std::cout << "Colors spectrum:\n";
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color24_bg(i,0,0) << ' ';
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color24_bg(i,i,0) << ' ';
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color24_bg(0,i,0) << ' ';
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color24_bg(0,i,i) << ' ';
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color24_bg(i,i,i) << ' ';
    }
    std::cout << Fterm::reset() << '\n';

    std::cout << "\n24bit to 8bit conversion\n";
    std::cout << "------------------------\n";
    std::cout << "Full Colors:\n";
    std::cout << "Real:   " << Fterm::get_color24_fg(255, 255, 255) << "WHITE" << Fterm::get_color24_fg(0, 0, 0) << "BLACK" << Fterm::get_color24_fg(255, 0, 0) << "RED" << Fterm::get_color24_fg(0, 255, 0) << "GREEN" << Fterm::get_color24_fg(0, 0, 255) << "BLUE" << Fterm::reset() << '\n';
    std::cout << "Dark:   " << Fterm::get_color8_fg(Fterm::convert_bit24_bit8_dark(255, 255, 255)) << "WHITE" << Fterm::get_color8_fg(Fterm::convert_bit24_bit8_dark(0, 0,0)) << "BLACK" << Fterm::get_color8_fg(Fterm::convert_bit24_bit8_dark(255, 0, 0)) << "RED" << Fterm::get_color8_fg(Fterm::convert_bit24_bit8_dark(0, 255, 0)) << "GREEN" << Fterm::get_color8_fg(Fterm::convert_bit24_bit8_dark(0, 0, 255)) << "BLUE" << Fterm::reset() << '\n';
    std::cout << "Bright: " << Fterm::get_color8_fg(Fterm::convert_bit24_bit8_bright(255, 255, 255)) << "WHITE" << Fterm::get_color8_fg(Fterm::convert_bit24_bit8_bright(0, 0,0)) << "BLACK" << Fterm::get_color8_fg(Fterm::convert_bit24_bit8_bright(255, 0, 0)) << "RED" << Fterm::get_color8_fg(Fterm::convert_bit24_bit8_bright(0, 255, 0)) << "GREEN" << Fterm::get_color8_fg(Fterm::convert_bit24_bit8_bright(0, 0, 255)) << "BLUE" << Fterm::reset() << '\n';
    
    std::cout << "Color spectrum:\n";
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color24_bg(i,0,0) << ' ';
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color8_bg(Fterm::convert_bit24_bit8_dark(i,0,0)) << ' ';
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color8_bg(Fterm::convert_bit24_bit8_bright(i,0,0)) << ' ';
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color24_bg(i,i,0) << ' ';
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color8_bg(Fterm::convert_bit24_bit8_dark(i,i,0)) << ' ';
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color8_bg(Fterm::convert_bit24_bit8_bright(i,i,0)) << ' ';
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color24_bg(0,i,0) << ' ';
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color8_bg(Fterm::convert_bit24_bit8_dark(0,i,0)) << ' ';
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color8_bg(Fterm::convert_bit24_bit8_bright(0,i,0)) << ' ';
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color24_bg(0,i,i) << ' ';
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color8_bg(Fterm::convert_bit24_bit8_dark(0,i,i)) << ' ';
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color8_bg(Fterm::convert_bit24_bit8_bright(0,i,i)) << ' ';
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color24_bg(i,i,i) << ' ';
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color8_bg(Fterm::convert_bit24_bit8_dark(i,i,i)) << ' ';
    }
    std::cout << Fterm::reset() << '\n';
    for(unsigned int i = 0; i < 256; i+=5) {
        std::cout << Fterm::get_color8_bg(Fterm::convert_bit24_bit8_bright(i,i,i)) << ' ';
    }
    std::cout << Fterm::reset() << '\n';

    std::cout << "\nUnderline colors (Working on terminals with Style_extra::underline support):\n";
    std::cout << "----------------------------------------------------------------------------\n";
    std::cout << "\n8bit:\n" << Fterm::get_style(Fterm::Style_extra::underline);
    for (unsigned int i = 0; i < 256; i+=5)
    {
        std::cout << Fterm::get_color8_underline(i) << "T";
    }
    std::cout << Fterm::reset() << "\n24bit:\n" << Fterm::get_style(Fterm::Style_extra::underline);
    for (unsigned int i = 0; i < 256; i+=5)
    {
        std::cout << Fterm::get_color24_underline(i,0,0) << "T";
    }
    std::cout << Fterm::reset() << "\n24bit:\n" << Fterm::get_style(Fterm::Style_extra::underline);
    for (unsigned int i = 0; i < 256; i+=5)
    {
        std::cout << Fterm::get_color24_underline(i,i,0) << "T";
    }
    std::cout << Fterm::reset() << "\n24bit:\n" << Fterm::get_style(Fterm::Style_extra::underline);
    for (unsigned int i = 0; i < 256; i+=5)
    {
        std::cout << Fterm::get_color24_underline(0,i,0) << "T";
    }
    std::cout << Fterm::reset() << "\n24bit:\n" << Fterm::get_style(Fterm::Style_extra::underline);
    for (unsigned int i = 0; i < 256; i+=5)
    {
        std::cout << Fterm::get_color24_underline(0,i,i) << "T";
    }
    std::cout << Fterm::reset() << "\n24bit:\n" << Fterm::get_style(Fterm::Style_extra::underline);
    for (unsigned int i = 0; i < 256; i+=5)
    {
        std::cout << Fterm::get_color24_underline(i,i,i) << "T";
    }
    std::cout << Fterm::reset() << '\n';

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
        Fterm::Color_set my_colors = Fterm::init_color_set_fg(Fterm::make_rgb(255,0,0), Fterm::convert_bit24_bit8_dark(0,255,0), Fterm::Color4_fg::blue);

        std::cout << "The following text is colored based on you terminal's supportage: " << get_color_auto(my_colors) << "TEST" << Fterm::reset() << '\n';
        std::cout << "The following text is colored using an maximum color of 8 bit: " << get_color_auto(my_colors, Fterm::Color_use::bit8) << "TEST" << Fterm::reset() << '\n';
        std::cout << "The following text is colored using an maximum color of 4 bit: " << get_color_auto(my_colors, Fterm::Color_use::bit4) << "TEST" << Fterm::reset() << '\n';
        std::cout << "The following text is colored using disabled colors (none): " << get_color_auto(my_colors, Fterm::Color_use::none) << "TEST" << Fterm::reset() << '\n';
    }
    std::cout << "\nAutomatic colors - a real example\n";
    std::cout << "=================================\n";

    std::cout << "This example takes the RGB values (237|98|14), which is some kind of orange, and Color4_fg::red_bright, which is the closest 4bit color\n";
    std::cout << "The following lines are printed using the autocolor function and generated 8 bit colors\n";
    // limiting the life time of my_colors
    {
        Fterm::Color_set my_colors = Fterm::init_color_set_fg(Fterm::make_rgb(237,98,14), Fterm::Color4_fg::red_bright);
        std::cout << "The following text is colored based on you terminal's supportage: " << Fterm::get_color_auto(my_colors) << "TEST" << Fterm::reset() << '\n';
        std::cout << "The following text is colored using an maximum color of 8 bit: " << Fterm::get_color_auto(my_colors, Fterm::Color_use::bit8) << "TEST" << Fterm::reset() << '\n';
        std::cout << "The following text is colored using an maximum color of 4 bit: " << Fterm::get_color_auto(my_colors, Fterm::Color_use::bit4) << "TEST" << Fterm::reset() << '\n';
        std::cout << "The following text is colored using disabled colors (none): " << Fterm::get_color_auto(my_colors, Fterm::Color_use::none) << "TEST" << Fterm::reset() << '\n';
    }
}
