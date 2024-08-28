#include <iostream>
#include <cstdlib>
#include <cstring>

// 全局变量来跟踪分配的总内�?
size_t allocated_memory = 0;

void* operator new[](std::size_t size) {
    // 分配内存并记录大�?
    allocated_memory = size;
    void* ptr = std::malloc(size);
    std::cout << "operator new[]: 分配 " << size << " 字节内存，地址: " << ptr << std::endl;
    return ptr;
}

void operator delete[](void* ptr) noexcept {
    // 输出即将释放的内存信�?
    std::cout << "operator delete[]: 释放地址: " << ptr << std::endl;

    // 模拟修改内存的内�?
    if (ptr != nullptr) {
        std::memset(ptr, 0xAA, allocated_memory);  // �?0xAA填充内存
    }

    // 释放内存
    std::free(ptr);
}

int main() {
    // 分配一个int数组
    int* arr = new int[1024];
    std::cout << "数组地址: " << arr << std::endl;

    // 删除数组
    delete[] arr;

    // 尝试访问数组的元祖 
    std::cout << "尝试访问已释放的内存: " << arr[0] << std::endl;  // 访问释放后的内存（未定义行为)
    std::cout << "你好"<<std::endl;

    return 0;
}
