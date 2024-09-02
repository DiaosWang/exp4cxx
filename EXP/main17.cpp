#include<iostream>

class A {
public:
    void fun1() {
        std::cout << "fun1 function of class A" << std::endl;
    }

    void fun2() {
        // 类内
        void (A::*ptr)() = &A::fun1;
        (A().*ptr)();  // 不推荐：临时对象的生命周期很短
    }
    ~A(){
        std::cout << "destory the obj" << std::endl; 
    }
};

int main(){     
    // 类外
    void (A::*ptr)() = &A::fun1;
    (A().*ptr)();

    A().fun2();    
    return 0; 
}