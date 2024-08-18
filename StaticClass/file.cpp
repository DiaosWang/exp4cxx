#include <iostream>

// static 存储类指示编译器在程序的生命周期内保持变量持续存在
static int counter = 0;  // static 全局变量，在所有文件中存在，但只能在 file.cpp 中使用

void incrementCounter() {
    counter++;
    std::cout << "Counter in file.cpp: " << counter << std::endl;
}

void fun(){
    static int da = 7;  // 虽然是局部变量，但只会初始化一次，并且在程序生命周期中一直存在（不会被销毁）
    da += 1;
    std::cout << "static int da = " << da << ", func `fun` in file.cpp" << std::endl;
}
