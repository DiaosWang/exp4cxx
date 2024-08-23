#include<iostream> 

template<class T1,class T2,class T3>  // 模板函数
T1 h(T2 a,T3 b){  // 返回值中有模板形参
    std::cout << "in T1 h(T2 a, T3 b)" << std::endl;
    return a+b;
}

// template<> int h(int a, int b){  // 对函数特化
//     std::cout << "specific template. template<> int h(int a, int b)" << std::endl;
//     return a+b;
// } 

// template<> int h<int>(int a, int b); // 特化声明
// template<> int h<int>(int a, int b); // 再次特化声明（不会报错）

template int h<int>(int a, int b);  // 这是对模板函数`h`显式实例化定义

int main(){
    h<int>(2,3); // 返回值中有模板形参，必须显示实例化调用
    return 0;
}