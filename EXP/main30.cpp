#include<iostream>


/* A和B的定义不可颠倒，不然会导致error: 'A' does not name a type 

class B{
public:
    A* getA(){
        A* a = new A();
        return a;
    }
};

class A{
public:
    int a ; 
    int b; 

    A(): a(12), b(44){}
};

*/

class A{
public:
    int a ; 
    int b; 

    A(): a(12), b(44){}
};

class B{
public:
    A* getA(){
        A* a = new A();
        return a;
    }
};



int main(){
    B* b = new B();
    A* a = b->getA();
    std::cout << a->a << "  " << a->b << std::endl; 
    return 0; 
}

