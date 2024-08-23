#include "a.h"

// 外部链接
int MyClass::a = 22;  // 定义必须完整，不能是`MyClass::a = 22;`

int MyClass::printA(){  // 外部链接
    std::cout << "MyClass::printA : " << MyClass::a << std::endl;
    return MyClass::a; 
}

int MyClass::printB(){  //外部链接
    std::cout << "MyClass::printB : " <<  MyClass::a << std::endl; 
    return MyClass::a;
}

MyClass mc1; 
 
