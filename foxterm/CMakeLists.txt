# configure information header
configure_file(info.hpp.in info.hpp)

# create library
add_library(foxterm color_auto.cpp color.cpp convert.cpp style.cpp manipulate.cpp)
target_include_directories(foxterm PUBLIC ${PROJECT_SOURCE_DIR} ${PROJECT_BINARY_DIR})
set_target_properties(foxterm PROPERTIES
    PUBLIC_HEADER "foxterm/color_auto.hpp;foxterm/color.hpp;foxterm/convert.hpp;foxterm/style.hpp;foxterm/info.hpp")

