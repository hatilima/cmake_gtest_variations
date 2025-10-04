CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

ADD_LIBRARY(add SHARED addLib/addlib.cpp)
ADD_LIBRARY(diff libraries/diff.cpp)
INCLUDE_DIRECTORIES(libraries)
ADD_EXECUTABLE(hello main.cpp)
TARGET_LINK_LIBRARIES(hello add diff)

TARGET_COMPILE_FEATURES(hello PRIVATE cxx_lambda_init_captures)