cmake_minimum_required(VERSION 3.21)
project(a2)

set(CMAKE_CXX_STANDARD 11)

add_executable(a2 main.cpp cmake-build-debug/Intitem.cpp cmake-build-debug/Intitem.h cmake-build-debug/Listitem.h cmake-build-debug/Stringitem.cpp cmake-build-debug/Stringitem.h cmake-build-debug/Node.cpp cmake-build-debug/Node.h cmake-build-debug/Linkedlist.cpp cmake-build-debug/Linkedlist.h)
