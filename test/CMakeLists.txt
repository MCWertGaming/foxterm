# testing
add_executable(tests base_test.cpp manipulate_test.cpp)
target_link_libraries(tests gtest gtest_main foxterm)
