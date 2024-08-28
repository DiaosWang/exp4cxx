#include<iostream>
#include<string>

int main(){
    std::string str1; 
    str1.resize(1024);
    std::cout << str1 << std::endl;
    for(char a : str1){
        std::cout << static_cast<int>(a)<< " "; 
    }
    std::cout << std::endl; 

    int a; 
    std::cout << a << std::endl;  
    
}