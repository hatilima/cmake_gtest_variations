set(TEST_BINARY ${CMAKE_PROJECT_NAME}_test)

# Explicit list of test source files
set(TEST_SOURCES
    main_test.cpp
    Formula_test.cpp
)

# Define the test executable
add_executable(${TEST_BINARY} ${TEST_SOURCES})

# Register it as a test (so `ctest` works)
add_test(NAME ${TEST_BINARY} COMMAND ${TEST_BINARY})

# Link your class library and GoogleTest
target_link_libraries(${TEST_BINARY}
    PRIVATE
        Formula
        gtest
        gtest_main
)

# Optionally include headers from Library if needed for testing
#target_include_directories(${TEST_BINARY}
#    PRIVATE
#        ${CMAKE_SOURCE_DIR}/Library
#)
