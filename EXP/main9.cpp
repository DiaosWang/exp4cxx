#include<iostream> 

class Base{
public:
    int a = 1; 
    int b = 2; 
    Base(int a, int b): a(a), b(b){}
    Base(){
        std::cout << "this is no params of Base()" <<std::endl; 
    }

};

class Son : public Base{
public:
    int a = 44;
    int k = 12; 
    Son(int a, int k): a(a), k(k){
        std::cout << "bagin Son(int a, int k)" << std::endl; 
    }
};

int main(){
    Base* ba = new Base(111,222);
    std::cout << ba->a << "  " << ba->b << std::endl; 
    Son* sn = new Son(333,444);
    std::cout << sn->a << "  " << sn->k << "  " << sn->b << std::endl;  
    Base* ba1 = new Base();
    std::cout << ba1->a << "  " << ba1->b << std::endl; 
    return 0;  
}