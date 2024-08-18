cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_COMPILER "g++")#设置C++编译器
set(CMAKE_CXX_FLAGS "-g -Wall")

set(CMAKE_CXX_STANDARD 17)        # 使用C++17标准

PROJECT (proj CXX)
ADD_EXECUTABLE(main1 1Darray.cpp)
ADD_EXECUTABLE(main2 2Darray.cpp)
ADD_EXECUTABLE(main3 3Darray.cpp)