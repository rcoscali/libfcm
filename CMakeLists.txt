cmake_minimum_required(VERSION 3.24)
project(libfcm C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(include)
include_directories(src)

add_library(libfcm.so SHARED
        src/libfcm.c)
add_library(libfcm.a STATIC
        src/libfcm.c)