cmake_minimum_required(VERSION 3.30)
project(pair C)

set(CMAKE_C_STANDARD 11)

add_library(pair STATIC pair.c pair.h)
