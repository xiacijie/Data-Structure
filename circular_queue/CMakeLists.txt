cmake_minimum_required(VERSION 3.8)
project(circular_queue)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c circular_queue.c circular_queue.h)
add_executable(circular_queue ${SOURCE_FILES})