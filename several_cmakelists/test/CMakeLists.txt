cmake_minimum_required(VERSION 3.10)
project(TESTAPP)

include_directories({gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(TESTAPP test.cpp)

target_link_libraries(TESTAPP gtest gtest_main)