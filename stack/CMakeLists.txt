cmake_minimum_required(VERSION 3.7)
project(helloworld)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c stack.c stack.h)
add_executable(helloworld ${SOURCE_FILES})