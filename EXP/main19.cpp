#include<iostream>  

class A{
public: 
    virtual void main(){        std::cout << "virtual void main of A" <<std::endl; }
};

class B:public A {
private:
    void main(){        std::cout <<"virtual void main of B" << std::endl; }
};

int main(){
    B* b = new B ;      A* a = b; 
    // 访问class A 中的main函数
    void (A::*ptr)() = &A::main;     (a->*ptr)();  
    return 0; 
}