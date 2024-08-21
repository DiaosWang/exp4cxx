#include "MyTemplate.h"
#include <iostream>

template<typename T>
void h(T a) {
    std::cout << "Value: " << a << std::endl;
}

// 显式实例化定义
template void h<int>(int a);
