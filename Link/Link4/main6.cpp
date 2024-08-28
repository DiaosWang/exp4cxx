// Tool::fun()::a 和fun2::a 不冲突，都是局部变量 
#include <iostream>

class Tool{
    public:
        void fun(){
            static int a = 12; 
            a += 1; 
            std::cout << a << std::endl;  
        }
        static void fun3(){
            static int a = 22; 
            a += 1; 
        }
};

void fun2(){
    static int a = 24;  
    a+=1;
}

int main(){
    Tool tool, tool2; 
    tool.fun();
    tool.fun();
    tool.fun();
    tool2.fun();
    tool2.fun();
    tool.fun3();
    return 0; 
}