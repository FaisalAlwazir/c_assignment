cmake_minimum_required(VERSION 3.16)
project(C_assignment C)

set(CMAKE_C_STANDARD 99)

add_executable(C_assignment main.c services.c tests.c tests.h operations.c operations.h)