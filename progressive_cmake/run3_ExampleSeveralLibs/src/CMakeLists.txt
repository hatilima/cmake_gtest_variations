set(BINARY ${CMAKE_PROJECT_NAME})

# Explicit list of source files in src/
set(SRC_SOURCES
    main.cpp
)

# Define the executable
add_executable(${BINARY}_run ${SRC_SOURCES})

# Link against the external Library target
target_link_libraries(${BINARY}_run PRIVATE Formula)

# Optionally add include directory for headers in src/
# target_include_directories(${BINARY}_run PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
