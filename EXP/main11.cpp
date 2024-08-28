#include<iostream> 

class Base{
public:
    int a = 1; 
    void show(){ std::cout << "non-param show, a = " << this->a << std::endl; }
};

class Son : public Base{
public:
    int a = 4;
};
/* 输出
non-param show, a = 1
non-param show, a = 1
*/
int main(){
    Son* sn = new Son();
    sn->show();
    sn->Base::show(); 
    
    delete sn;
    return 0;  
}

