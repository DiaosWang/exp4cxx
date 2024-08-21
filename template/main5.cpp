#include<iostream>

template <class T> class QueueItem;

template <class T> 
class Queue{
    public:
        void bar(QueueItem<T> qt){
            std::cout << "Queue.bar() : " << qt.value << std::endl; 
        }
};

template <class T> class QueueItem
{   
    //  非约束型友元模板函数或友元类的建立
    template <class Type> friend class Foo;
    template <class Type> friend void foo(QueueItem<Type>);
    template <class Type> friend void Queue<Type>::bar(QueueItem<Type>);  // 需要先定义或声明 
    private: 
        T value = 233; 
};

template <class T> 
class Foo{
    public:
        template<class U> 
        void printfoo(QueueItem<U> qt){
            std::cout << "func printfoo in class Foo : " << typeid(qt.value).name() << ", " <<qt.value << std::endl;
        }
};
template <class T> 
void foo(QueueItem<T> qt){
    std::cout << "foo(QueueItem<T>) : " << qt.value << std::endl;
}


int main(){
    QueueItem<double> dqitem;
    QueueItem<int> iqitem; 

    Foo<double> dfoo;
    dfoo.printfoo(dqitem);
    dfoo.printfoo(iqitem);
    foo(iqitem);

    Queue<int> qu; 
    qu.bar(iqitem);

    return 0;
}