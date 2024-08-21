#include<iostream>

template <class Type> class QueueItem;

template <class Type> class Foo {};
template <class Type> void foo(QueueItem<Type>){}
template <class Type> class Queue{ 
    public: 
        void bar();
};
//模板函数、模板类成为同类型实例类的友元 约束性友元
template <class Type> 
class QueueItem
{
    friend class Foo<Type>;  //模板类Foo需要先定义或声明，并带有<>
    friend void foo<Type>(QueueItem<Type>); //模板函数foo()需要先定义或声明 
    friend void Queue<Type>::bar();   //模板类Queue必须先定义
};

int main(){
    QueueItem<int> qt; 
    foo(qt);
    return 0; 
}