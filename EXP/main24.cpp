#include <iostream>

class A {};
class B {};

int main() {
    A a;
    B b;

    // 1. 在没有任何关系的类之间使用 static_cast
    A* aptr = static_cast<A*>(&b);  // 编译错误：'A' 和 'B' 之间没有转换关系

    // 2. 从指针类型转换为整数类型
    int* intPtr = nullptr;
    int num = static_cast<int>(intPtr);  // 编译错误：无法从 'int*' 转换为 'int'

    return 0;
}
