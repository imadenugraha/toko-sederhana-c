# Minimum CMAKE Version
cmake_minimum_required(VERSION 3.18)

# Name of the project
project(TokoSederhana
    VERSION 1.0
    DESCRIPTION "A simple shop application"
    LANGUAGES C
)

# Set the C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)
set(CMAKE_C_EXTENSIONS OFF)

# Set the C compiler flags
if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    set(COMPILER_WARNINGS
        -Wall
        -Wextra
        -Wpedantic
        -Wshadow
        -Wformat=2
        -Who-unused-parameter
    )
endif()

# Define Sources File
set(SOURCES
    src/main.c
)

# Create Executable
add_executable(${PROJECT_NAME} ${SOURCES})
