#include<iostream>

class Foo { 
    public: 
        void bar();
};

// 非模板函数、类成为所有实例类的友元
template <class Type>
class QueueItem
{
    friend class Foobar;  //类Foobar不需要先定义或声明，并没有<>
    friend void foo();    //函数foo（）
    friend void Foo::bar();//类Foo必须先定义
};

class Foobar{};
void foo(){}

int main(){
    QueueItem<int> qt; 
    foo();
    return 0;
}