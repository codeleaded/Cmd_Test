# Minimum CMake Version
cmake_minimum_required(VERSION 3.25)

# Projektname, Version, Sprache
project(MyProject VERSION 1.0 LANGUAGES C)

# C Standard
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON) # gnu17

# Compiler Warnings
if(MSVC)
    # Für Visual Studio
    add_compile_options(/W4 /WX)
else()
    # Für GCC/Clang
    add_compile_options(
        -Wall
        -Wextra
        -Wpedantic
        -Wshadow
        -Wconversion
        -Wcast-align
        -Wwrite-strings
        -Wundef
        -Wstrict-overflow=5
        -Winline
        -Wredundant-decls
        -Wcast-qual
        -Wpointer-arith
        -Wformat=2
        -Werror
    )
endif()

# Include-Pfade
include_directories(
    ${PROJECT_SOURCE_DIR}/include
)

# Quellcode-Dateien
file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.c")

# Executable erzeugen
add_executable(${PROJECT_NAME} ${SOURCES})

# Optional: Libraries linken
# target_link_libraries(${PROJECT_NAME} m)  # z.B. für math library (libm)
