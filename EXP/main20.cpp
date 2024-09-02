#include <iostream>
#include <stdio.h>
class A {
public:
    virtual void main(); 
    // {
    //     std::cout << "virtual void main of A" << std::endl; 
    // }

    virtual void main2(); 
    // {
    //     std::cout << "virtual void main2 of A" << std::endl; 
    // }
    void main3(){
        std::cout << "main3 function of A " << std::endl; 
    }

};

void A::main()
{
    std::cout << "virtual void main of A" << std::endl; 
}

void A::main2(){
    std::cout << "virtual void main2 of A" << std::endl; 
}

void fun(){
    int a = 1; 
    std::cout << "a = " << a << std::endl; 
}

int main() {
    // 定义一个指向 A::main 成员函数的指针
    void (A::*ptr)() = &A::main;

    A a;
    // 使用成员函数指针调用 A::main
    (a.*ptr)();

    // 输出指针本身的值（这只是一个示例，不能代表实际的内存地址）

    ptr = &A::main2;
    (a.*ptr)();
    std::cout << (long long)(void*)ptr << std::endl; 

    ptr = &A::main3; 
    // std::cout << ptr << std::endl;

    void (*ptr2)() = &fun; 
    (*ptr2)(); 
    std::cout << (long long)ptr2 << std::endl; 

    return 0;
}
