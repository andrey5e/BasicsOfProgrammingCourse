cmake_minimum_required(VERSION 3.26)
project(untitled1 C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled1 main.c
        libs/algorithms/array/array.h
        libs/algorithms/array/array.c
)