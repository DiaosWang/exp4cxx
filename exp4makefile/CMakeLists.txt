# <pre name="code" class="cpp"><pre name="code" class="cpp">set(CMAKE_C_COMPILER "gcc")#设置C编译器
# set(CMAKE_C_FLAGS "-g -Wall  -I C:\\mingw-4.81\\mingw\\include -L C:\\mingw-4.81\\mingw\\lib")#

set(CMAKE_CXX_COMPILER "g++")#设置C++编译器
set(CMAKE_CXX_FLAGS "-g -Wall")
# # -g 和 -Wall 是通用的编译选项，建议在编译调试版本时保留这些选项以便更好地调试代码并捕获潜在错误。这些选项即使设置了环境变量也需要在 CMake 中显式声明
# # -I C:\\mingw-4.81\\mingw\\include：这个选项指定了一个额外的头文件搜索路径。-I 之后的路径表示在编译时，编译器会额外在这个路径下搜索头文件。
# # -L C:\\mingw-4.81\\mingw\\lib：这个选项指定了一个额外的库文件搜索路径。-L 之后的路径表示在链接时，编译器会在这个路径下搜索库文件。
# set(CMAKE_CXX_FLAGS "-g -Wall  -I C:\\mingw-4.81\\mingw\\include -L C:\\mingw-4.81\\mingw\\lib")
 
PROJECT (HELLO CXX)
SET(SRC_LIST main.cpp)
ADD_EXECUTABLE(hello ${SRC_LIST})
 
MESSAGE(STATUS "This is BINARY dir " ${HELLO_BINARY_DIR})
MESSAGE(STATUS "This is SOURCE dir " ${HELLO_SOURCE_DIR})
