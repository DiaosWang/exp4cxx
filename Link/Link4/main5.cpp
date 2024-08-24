template<typename T> 
class TypeClass{
    public: 
        T kk;
        int ik = 789; 
        static T staticKK; 
        void Func1();
        void Func4(){};
        void Func2(T a);
        void Func3(T a){};
        static void staticFunc1();
        static void staticFunc4(){};
        static void staticFunc2(T a);
        static void staticFunc3(T a){};
};
template<typename T>
void TypeClass<T>::Func1(){}

template<typename T>
void TypeClass<T>::Func2(T a){}

template<typename T>
void TypeClass<T>::staticFunc1(){}

template<typename T>
void TypeClass<T>::staticFunc2(T a){}

template class TypeClass<int>;  // 实例化声明，会实例化模板类

int main(){
    return 0; 
}