// 普通函数
void interFunc(){
    static int localStatic = 22; 
}

// 模板函数
template<class T2, class T3>  // 模板函数 --(1)
int h(T2 a,T3 b){  // 返回值中有模板形参
    return a+b;
}

int h(int a, int b){  // 普通函数  --(2) 
    return a+b;
}

template<> int h(float a, float b){  // 对模板函数特化 --(3) 
    return a+b;
} 

template int h(char, char); // 实例化声明

int main(){
    return 0; 
}