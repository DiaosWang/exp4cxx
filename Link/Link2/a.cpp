#include<iostream> 
#include "a.h"


const int z = 30; // a.h 中已经声明`extern const int z;`.
                  // 在此时`const int z = 30`等价于`extern const int z = 30`.   

void A(){
    std::cout << "z = " << z << std::endl;
}