cmake_minimum_required(VERSION 3.15)
project(SO_C)

set(CMAKE_CXX_STANDARD 17)

add_library(SO_C SHARED library.cpp library.h)