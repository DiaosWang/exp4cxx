#include <iostream>

// 定义全局函数 A
void A() {
    std::cout << "this is function A" << std::endl;
}

int main() {
    // 定义一个函数指针，指向返回类型为 void，参数列表为空的函数
    void (*funcPtr)();

    // 将函数 A 的地址赋值给函数指针
    funcPtr = &A;

    // 通过函数指针调用函数 A
    funcPtr();  // 或者 (*funcPtr)();
    (*funcPtr)();

    return 0;
}
