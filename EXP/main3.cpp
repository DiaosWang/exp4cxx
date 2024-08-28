#include<iostream> 

template<class _Ty, size_t Size>
void TestMemArr(_Ty(&data)[Size])
{
    std::cout << "sizeof data : " << std::endl; 
}

int main(){

    return 0; 
}