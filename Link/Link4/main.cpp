static int internalVar = 42;
int Var = 34; 

void internalFunc() {
    static int localStatic = 0;
}

class MyClass{  // 本质上此时MyClass只是声明 
    public:
        int ClassVar = 23; 
        static int ClassStatic;  // 在此只是声明
        void printVar();
};
int MyClass::ClassStatic = 10;  //外部链接 
void MyClass::printVar(){
    static int b = 33; 
    int a = 23;
}

template<typename T> T th(T a, T b){
    return a + b; 
} 

static MyClass mc; 
MyClass mac; 


template<class T2,class T3>  // 模板函数 --(1)
int h(T2 a,T3 b){  // 返回值中有模板形参
    return a+b;
}

int h(int a, int b){  // 普通函数  --(2) 
    return a+b;
}

template<> int h(float a, float b){  // 对函数特化 --(3) 
    return a+b;
} 

template<typename T> 
class TypeClass{
    public: 
        T kk;
        int ik = 789; 
        static T staticKK; 
};

template class TypeClass<int>;  // 实例化声明，会实例化模板 

TypeClass<int> tc;  

template<typename T>
T TypeClass<T>::staticKK;  // 泛型定义

template<> int TypeClass<int>::staticKK = 10;

int main() {
    // internalFunc();
    MyClass mcc;  
    th<int>(2,3); 
    th<double>(2.0,3.0);
    h(2.3f,3.6f);
    return 0;
}
