#include<iostream>

template<class T> //@1
void h(const T a){
    std::cout << "template<class T> " << std::endl;
    std::cout << typeid(a).name() << std::endl;
    std::cout << a << std::endl;
}
template<class T, class T2> // @2 模板重载
void h(const T a){
    std::cout << "template<class T, class T2> " << std::endl;
    std::cout << typeid(a).name() << std::endl;
    std::cout << a << std::endl;
}

template void h<int>(int a); //  声明并定义T=int实例类  

int main(){
    int a = 124; 
    h(a);  // 输出：template<class T>  //如果此时调用@2，`T2`未知，所以调用@1 
    h<int,int>(a);  //输出：template<class T, class T2> 
    return 0;
}