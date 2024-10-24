#include<iostream>

class Base {
public:
    virtual void show() { std::cout << "Base" << std::endl; }
};

class Derived : public Base {
public:
    void show() override { std::cout << "Derived" << std::endl; }
    void derivedMethod() { std::cout << "Derived method" << std::endl; }
};

int main() {
    Base* b = new Base();
    Derived* d = static_cast<Derived*>(b);  // 显式向下转换：Base* 转换为 Derived*
    std::cout<< "d = " << (d == nullptr) << std::endl;  // 这种向下转化不安全，d=nullptr 
    if (d) {
        d->derivedMethod(); 
        d->show();   
        d->Base::show();  // `nullptr->...` 无输出
    }
    delete b;
    return 0;
}
