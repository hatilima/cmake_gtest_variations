# Explicit list of Formula source files
set(FORMULA_SOURCES
    Formula.cpp
)

# Create a static library named "Formula"
add_library(Formula STATIC ${FORMULA_SOURCES})

# Make Formula.h available to consumers
target_include_directories(Formula PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
