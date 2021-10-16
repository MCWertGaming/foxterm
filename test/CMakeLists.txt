# testing
add_executable(tests manipulate_test.cpp style_test.cpp color_test.cpp convert_test.cpp color_auto_test.cpp)
target_link_libraries(tests gtest gtest_main foxterm)
