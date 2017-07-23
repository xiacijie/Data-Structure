cmake_minimum_required(VERSION 3.7)
project(linkded_list)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c linked_list.c)
add_executable(linkded_list ${SOURCE_FILES})