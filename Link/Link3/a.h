# ifndef A_H
# define A_H
#include<iostream>

class MyClass{
    public:
        static int a;   // 这里只是声明不定义 
                        // `static int a = 3;`非法，定义需要在类外定义
        
        int b;          // 定义
        
        int printB();   // 只是函数声明
        // int printB(){  //若声明且定义，则等价于内联函数，内部链接
        //     std::cout << "MyClass::printB : " <<  MyClass::a << std::endl; 
        //     return MyClass::a;
        // }

        static int printA(); // 声明不定义
        // static int printA(){  //若声明且定义，则等价于内联函数，内部链接
        //     std::cout << "MyClass::printA : " << MyClass::a << std::endl;
        //     return MyClass::a;
        // } 
};



# endif