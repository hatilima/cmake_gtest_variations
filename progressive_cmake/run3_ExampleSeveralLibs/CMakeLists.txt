cmake_minimum_required(VERSION 3.20)

set(CMAKE_CTEST_ARGUMENTS "--verbose")

enable_testing()

project(run3_ExampleProject)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(src)
add_subdirectory(formula)
add_subdirectory(test)
add_subdirectory(googletest)
