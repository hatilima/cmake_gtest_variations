cmake_minimum_required(VERSION 3.10)
project(APP)

#create bin and lib folders:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR/lib})

#enable google test and add its directory:
enable_testing()
add_subdirectory(googletest)

#add directory include headers:
include_directories(src)

#add all subdirectories:
add_subdirectory(src)
add_subdirectory(test)