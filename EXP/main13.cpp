#include<iostream>  

class A{
public: 
    virtual void main(){
        std::cout << "virtual void main of A" <<std::endl; 
    }

    int fun(){
        std::cout <<"fun function: " << (long long)((void*)&A::main) << std::endl; 
        auto ptr = &A::main; 
        (this->*ptr)();  
        this->A::main();
        return 0; 
    }
};

class B:public A {
    void main(){
        std::cout <<"virtual void main of B" << std::endl; 
    }
};

int main(){
    B* b = new B ;  
    A* a = b; 
    b->fun(); 
    a->fun(); 
    return 0; 
}