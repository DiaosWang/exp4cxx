#include<iostream> 

class Base{
public:
    int a = 1; 
    void show(int a = 111){ this-> a = a ; std::cout <<"show function of Class Base, a = " << a << std::endl;}
};

class Son : public Base{
public:
    int a = 4;
    void show(int a = 444 ){ this-> a = a; std::cout <<"show function of Class Son, a = " << a << std::endl; this->Base::show();}
};
/* 输出
show function of Class Son, a = 444
show function of Class Base, a = 111
*/
int main(){
    Son* sn = new Son();
    sn->show();
    return 0;  
}

