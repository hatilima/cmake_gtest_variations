cmake_minimum_required(VERSION 3.20)

project(ExampleProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_subdirectory(src)
add_subdirectory(lib/googletest)
add_subdirectory(test)