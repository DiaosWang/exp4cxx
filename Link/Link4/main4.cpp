class MyClass{  // 本质上此时MyClass只是声明 
    public:
        int ClassVar = 23;  //定义，但是依赖于class对象(无链接)
        static int ClassStatic;  // 在此只是声明（不会定义）
        void printVar(); // 声明不定义
        void inlineFunc(){ // 非静态函数 类内定义
            static int kk = 33; 
        }
        static void staticFunc1(){} // 静态函数  类内定义 
        static void staticFunc2();
};
int MyClass::ClassStatic = 10;  // 静态变量  类外定义 　　
void MyClass::printVar(){  // 非静态函数 类外定义 
    static int b = 33; 
    int a = 23;
}
void MyClass::staticFunc2(){}  // 静态函数 类外定义

MyClass mc; 

int main(){
    return 0; 
}