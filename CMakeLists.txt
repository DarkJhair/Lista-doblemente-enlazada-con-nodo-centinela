cmake_minimum_required(VERSION 3.8)
project(ExamenIParcial)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp NodoL.cpp NodoL.h LDE.cpp LDE.h HashTable.cpp HashTable.h)
add_executable(ExamenIParcial ${SOURCE_FILES})