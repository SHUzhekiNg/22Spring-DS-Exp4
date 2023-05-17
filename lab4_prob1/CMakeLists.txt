cmake_minimum_required(VERSION 3.21)
project(lab4_prob1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab4_prob1
        Assistance.h
        QuickSort.h
        TestQuickSort.cpp)
