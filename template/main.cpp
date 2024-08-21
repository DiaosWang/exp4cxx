#include<iostream>

template<class T> 
void h(const T a){
    // std::cout << T << std::endl;
    std::cout << typeid(a).name() << std::endl;
    std::cout << a << std::endl;
}

template void h<int>(int a); //  声明并定义T=int实例类  

int main(){
    int a[] = {1,2,3};
    h(a); //  也可以显示给出T来调用函数h<int*>(a)
    int b = 33; 
    h(&b); // T = int*  
    return 0;
}