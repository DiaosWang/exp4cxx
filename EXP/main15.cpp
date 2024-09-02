#include<iostream>  

class A{
public: 
    virtual void main(){ std::cout << "void main of A" <<std::endl; }
    void fun(){ 
        this->A::main();  // 不等价于 `auto ptr = &A::main;   (this->*ptr)(); ` 
    }
};

class B:public A {
    void main(){ std::cout <<"void main of B" << std::endl;  }
};

int main(){
    B* b = new B ;      A* a = b; 
    b->fun();           a->fun();
    return 0; 
}