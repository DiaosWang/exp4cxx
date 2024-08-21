#include<iostream> 
#define Pi (23*12)

template<class T, int a>  // a的实参应该是一个编译时的常量表达式（即在编译时就能获知结果）
void h(T b){
    std::cout << b << std::endl;
    std::cout << a << std::endl; 
}

template<const int* a>
void m(){
    std::cout << a << std::endl;
    std::cout << *a << std::endl;
}

static const int g = 30; // 编译时就确定了g

int main(){
    int k = 12;
    // h<float, k*2>(12); // 这儿报错：因为k*2不是常量表达式
    h<float, Pi>(12);

    m<&g>();
    
    return 0;
}