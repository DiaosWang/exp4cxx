#include<iostream>

int main(){
    // 这两者等价
    const char* p1; 
    p1 = "hello"; // 常量指针,指向常量的指针。事实上"hello"的type = const char*
    char const *p2; 
    p2 = "hello"; // 常量指针
    
    char str[] = "this is str";  
    char* const p3 = nullptr; // 必须init时就绑定一个char
    p3 = str; // 指针常量，一旦指定则不能修改,因此报错
    p3 = "changedstr";  // 同样报错，原因同上

    p1 = "changedstr"; 
    p1 = str; 
    p1[0] = 'P'; //  报错。即便指向了可以修改的char数组，还是无法通过p1修改此数组
    p2 = "changedstr"; 
    
}