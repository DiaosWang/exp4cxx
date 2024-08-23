// 特化函数和模板函数平级，优先级低于普通函数
// 下列几个函数，main 中最后会调用哪个？ 
#include<iostream> 

template<class T2,class T3>  // 模板函数 --(1)
int h(T2 a,T3 b){  // 返回值中有模板形参
    std::cout << "in int h(T2 a, T3 b)" << std::endl;
    return a+b;
}

int h(int a, int b){  // 普通函数  --(2) 
    std::cout << "int h(int a, int b)" << std::endl;
    return a+b;
}

template<> int h(int a, int b){  // 对函数特化 --(3) 
    std::cout << "specific template. template<> int h(int a, int b)" << std::endl;
    return a+b;
} 


// template<> int h<int>(int a, int b); // 特化声明
// template<> int h<int>(int a, int b); // 再次特化声明（不会报错）

template int h<int>(int a, int b);  // 这是对模板函数`h`显式实例化定义（不能重复定义，不然会报错的）

int main(){
    h(2,3);  // output: int h(int a, int b)   --调用的是(2)
    return 0;
}