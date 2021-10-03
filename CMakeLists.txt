cmake_minimum_required(VERSION 3.20)
project(FoxTerm
        VERSION 1.0.0
        DESCRIPTION "XXX"
        HOMEPAGE_URL "https://github.com/X/X"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_subdirectory(examples)
add_subdirectory(foxterm)

# TESTING
include(.cmake/add_dependency.cmake)
add_subdirectory(dependencies)
add_subdirectory(test)

# INSTALL

