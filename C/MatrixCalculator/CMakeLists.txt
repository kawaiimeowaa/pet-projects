cmake_minimum_required(VERSION 3.20)

project(MatrixCalculator C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK4 REQUIRED IMPORTED_TARGET gtk4)

add_executable(MatrixCalculator
        src/main.c
)

target_link_libraries(MatrixCalculator
        PRIVATE PkgConfig::GTK4
)