#include <iostream> 

// return 引用
int& fun(){
    static int qa = -111; 
    std::cout << qa  << std::endl;
    return qa; // 返回指向qa的引用
}

// return 值
int fun2(){
    static int qb = -111; 
    std::cout << qb  << std::endl;
    return qb; // 先拷贝qb的值到临时变量，随后return此临时变量到主函数
}

int main(){
    fun() = 335;   
    fun();
    // int& a = 334;  // 引用a无法绑定int常量
    return 0 ; 
}
