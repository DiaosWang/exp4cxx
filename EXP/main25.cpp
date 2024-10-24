static int a = 55; 
const int b = 11; 
const int bb;  
int cc = 22;
void fun(){
    const int c = 1; 
    static int a = 44; 
}

void fun2(){
    static int a = 12; 
}

int main(){
    // std::cout << fun()::a << std::endl; 
    return 0;  
}

