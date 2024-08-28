#include <iostream>

// 模板函数，接受一个数组并遍历其元素
template<size_t Size> 
void fun(int (&arr)[Size]) {
    for (auto i : arr) {
        std::cout << i << " "; // 输出数组中的元素
    }
    std::cout << std::endl; // 换行
}

// 模版函数，更加通用
template<typename Ty, size_t Size> 
void fun2(Ty (&arr)[Size]) {
    for (auto i : arr) {
        std::cout << i << " "; // 输出数组中的元素
    }
    std::cout << std::endl; // 换行
}

int main() {
    int a[4] = {1, 2}; // 数组 a，部分初始化，未初始化的元素将被默认初始化为 0
    fun<4>(a); // 调用模板函数 fun，并传递数组 a (注意： 之所以显示调用模版，是为何防止编译器将其视为模版变量)
    fun2(a); 
    return 0;
}
