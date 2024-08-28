#include<iostream>  

int main(){
    int a[2][3] = {{1,2,3},{4,5,6}};
    int (*p)[3] = a; 
    std::cout << *(*(a+1)+2) << std::endl;
    std::cout << *(*(p+1)+2) << std::endl;
    std::cout << p[1][2] << std::endl; 
    std::cout << typeid(a).name() << std::endl; 
    std::cout << typeid(&a).name() << std::endl; 
    std::cout << typeid(&p).name() << std::endl; 

    int *pp =  a[0];
    std::cout <<typeid(a[0]).name();  
}