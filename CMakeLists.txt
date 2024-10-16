cmake_minimum_required(VERSION 3.22)

project(Dashboard VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_compile_options(-Wall)

add_executable(main src/main.cpp)