cmake_minimum_required(VERSION 3.21)
project(a2)

set(CMAKE_CXX_STANDARD 11)

add_executable(a2 main.cpp Intitem.cpp Intitem.h Listitem.h Stringitem.cpp Stringitem.h Node.cpp Node.h Linkedlist.cpp Linkedlist.h Stack.cpp Stack.h)
