cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_COMPILER "g++") #设置C++编译器
set(CMAKE_CXX_FLAGS "-g -Wall")

set(CMAKE_CXX_STANDARD 17)        # 使用C++17标准

PROJECT (proj CXX)
SET(SRC_LIST main.cpp b.cpp c.cpp )
ADD_EXECUTABLE(main ${SRC_LIST})