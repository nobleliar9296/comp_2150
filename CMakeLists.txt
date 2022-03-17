cmake_minimum_required(VERSION 3.21)
project(a2)

set(CMAKE_CXX_STANDARD 11)

add_executable(a2 main.cpp Intitem.cpp Intitem.h Listitem.h Stringitem.cpp Stringitem.h Node.cpp Node.h Linkedlist.cpp Linkedlist.h Stack.cpp Stack.h Queue.cpp Queue.h PriorityQueue.cpp PriorityQueue.h Simulation.cpp Simulation.h Meal.cpp Meal.h simulation1.cpp simulation1.h simulation2.cpp simulation2.h simulation3.cpp simulation3.h)
