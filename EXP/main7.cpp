#include <iostream>
#include <algorithm> // For std::begin and std::end
// #include <cstring>   // For memcpy

class XData {
    int a; 
    float b; 
    double c;
    // Your class definition
};

int main(int argc, char* argv[]) {
    XData datas[3];
    // unsigned char buf[1024] = { 0 };

    // std::cout << "==================memcpy==================" << std::endl;
    // memcpy(buf, &datas, sizeof(datas));

    // Printing the addresses
    std::cout << "Address of datas: " << static_cast<void*>(&datas) << std::endl;
    std::cout << "Address from std::begin(datas): " << static_cast<void*>(std::begin(datas)) << std::endl;

    std::cout << typeid(datas).name() << std::endl; 
    std::cout << typeid(datas).name() << std::endl; 
    // std::copy(std::begin(datas), std::end(datas), buf);

    // std::cout << "cppds.com" << std::endl;
    return 0;
}
