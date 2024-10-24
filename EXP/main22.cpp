#include<iostream>

int main(){
    char a[] = "12345"; 
    std::cout <<"typeid(&a).name(): " << typeid(&a).name() << std::endl; 
    char b[6] = "aasdf"; 
    std::cout <<"typeid(b).name(): " << typeid(b).name() << std::endl; 
    char *c = a;
    std::cout <<"typeid(c).name(): " << typeid(c).name() << std::endl; 

    char d[2][3] = {"23","45"}; 
    std::cout <<"" << typeid(&d[0]).name()  << std::endl;

}