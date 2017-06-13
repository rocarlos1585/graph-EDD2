cmake_minimum_required(VERSION 3.6)
project(graph_EDD2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp vertice.h graphMatriz.h)
add_executable(graph_EDD2 ${SOURCE_FILES})