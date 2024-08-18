#include <iostream>

// extern 存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的
extern int counter;  // 试图访问 file.cpp 中的 counter（会导致编译错误，但这一步只是extern，不会报错）
extern void incrementCounter();
extern void fun();
extern int * getGlobal();

void printCounter() {
    std::cout << "Counter in file2.cpp: " << counter << std::endl; // 在此编译错误，无法访问 file1.cpp 中的 counter
}

int main(){
    int * gv = getGlobal(); // 这里，getGlobal返回的是另一个文件中定义的static int [10] ,虽无法直接通过`extern ...`访问，但可以通过`return`这种方式访问. 
    for(int i = 0; i < 10; i++){
        *(gv+i) = 45;
        std::cout << "*(gv + " << i << ") : ";
        std::cout << *(gv + i) << std::endl;
    }

    printCounter();
    incrementCounter();
    int i = 0; 
    while (i < 10){
        fun();
        i++;
    }
    std::cout << "Hello World"; // 输出 Hello World
    return 0; 
} 
