#include <iostream>
using namespace std;

int main(){
    enum color {red, green=static_cast<char>(128), blue}; // enum 默认使用的是int, 但如果赋值的是short等int类型常量，会隐形转化为int类型   
    color d, c;  // 只能从定义的常量中选定, eg. red, green, blue 
    c = green ;  
    d = blue ;
    cout << c << " "<< d << endl;  // -128 -127 
    cout << "Hello World"; // 输出 Hello World
    return 0; 
} 