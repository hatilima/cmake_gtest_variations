cmake_minimum_required(VERSION 3.10)
project(APP)

#set cpp version:
set(CMAKE_CXX_STANDARD 14)

#set some flags (enable debugging, set optimization level, show warnings and errors...):
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra -g -O3")

#add libraries (all cpp files):
add_library(tools mylib/mylib.cpp)

add_executable(APP main.cpp) # the executable will be generated in bin/ and named APP

#link libraries with executable file:
target_link_libraries(APP tools)