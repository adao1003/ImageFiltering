cmake_minimum_required(VERSION 3.5)

project(ImageFiltering LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
add_library(libSO_C SHARED IMPORTED)
add_library(libSO_ASM SHARED IMPORTED)
SET_PROPERTY(TARGET libSO_C PROPERTY IMPORTED_LOCATION ../../../SO_C/cmake-build-debug/libSO_C.so)
SET_PROPERTY(TARGET libSO_ASM  PROPERTY IMPORTED_LOCATION ../../../SO_ASM/libSO_ASM.so)
add_executable(ImageFiltering
  main.cpp
  mainwindow.cpp
  mainwindow.h
  mainwindow.ui
)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")
target_link_libraries(ImageFiltering PRIVATE Qt5::Widgets)
target_link_libraries(ImageFiltering PRIVATE libSO_C)
target_link_libraries(ImageFiltering PRIVATE libSO_ASM)