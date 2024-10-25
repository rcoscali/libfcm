cmake_minimum_required(VERSION 3.24)
project(libfcm C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(include)

add_executable(libfcm
        include/buffermem.h
        include/diskfilecontent.h
        include/libfcm.h
        include/refdir.h
        src/libfcm.c
        libfcm.h)
