cmake_minimum_required(VERSION 3.20)

project(ExampleProject)

set(CMAKE_CXX_STANDARD 14)

# --- Fetch GoogleTest ---
include(FetchContent)

set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
set(BUILD_GTEST ON CACHE BOOL "" FORCE)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/heads/main.zip
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)

FetchContent_MakeAvailable(googletest)

# --- Subdirectories ---
add_subdirectory(src)
add_subdirectory(formula)
add_subdirectory(test)