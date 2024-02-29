cmake_minimum_required(VERSION 3.26)
project(untitled1 C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled1 main.c
        libs/algorithms/array/array.c
        libs/algorithms/array/array.h
        libs/data_structures/bitset/bitset.c
        libs/data_structures/bitset/bitset.h
        libs/data_structures/ordered_set/ordered.c
        libs/data_structures/ordered_set/ordered.h
        libs/data_structures/unordered_set/unordered.c
        libs/data_structures/unordered_set/unordered.h
)