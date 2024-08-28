#include<iostream>  

class TestMem{
public:
    TestMem(){
        std::cout << "this is TestMem constructor" << std::endl;
    }
    TestMem(int a ){
        std::cout << "construct the TestMem by "<< a << std::endl;
    }
    TestMem(int a, int b ){
        std::cout << "construct the TestMem by "<< a << ", " << b << std::endl;
    }
    ~TestMem(){
        std::cout << "thi is TestMem destroy" << std::endl;
    }
};

int main(){
    TestMem* tm = new TestMem[3]{{2,3},2,3};
    TestMem ta[2] = {};
    TestMem tb[2]{};           

    return 0; 
}