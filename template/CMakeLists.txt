cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_COMPILER "g++") #设置C++编译器
set(CMAKE_CXX_FLAGS "-g -Wall")

set(CMAKE_CXX_STANDARD 17)        # 使用C++17标准

PROJECT (proj CXX)
ADD_EXECUTABLE(main main.cpp)
ADD_EXECUTABLE(main2 main2.cpp)
ADD_EXECUTABLE(main3 main3.cpp)
ADD_EXECUTABLE(main4 main4.cpp)
ADD_EXECUTABLE(main5 main5.cpp)
ADD_EXECUTABLE(main51 main51.cpp)
ADD_EXECUTABLE(main52 main52.cpp)
ADD_EXECUTABLE(main31 main31.cpp)
ADD_EXECUTABLE(main32 main32.cpp)