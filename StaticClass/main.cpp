#include <iostream>

extern int counter;  // 试图访问 file.cpp 中的 counter（会导致编译错误，但这一步只是extern，不会报错）
extern void incrementCounter();
extern void fun();

void printCounter() {
    std::cout << "Counter in file2.cpp: " << counter << std::endl; // 在此编译错误，无法访问 file1.cpp 中的 counter
}

int main(){
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