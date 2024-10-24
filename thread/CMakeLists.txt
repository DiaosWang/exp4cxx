cmake_minimum_required(VERSION 3.10)
project(MyThreadApp C)

# 查找与线程相关的库（跨平台）
find_package(Threads REQUIRED)

# 添加可执行文件
add_executable(MyThreadApp main.c)
add_executable(MyThreadApp2 main2.c)

# 链接线程库
target_link_libraries(MyThreadApp PRIVATE Threads::Threads)
target_link_libraries(MyThreadApp2 PRIVATE Threads::Threads)
