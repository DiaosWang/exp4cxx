#include <iostream>
#include <cstring>

class MyClass {
private:
    char* data;
public:
    // 构造函数
    MyClass(const char* str) {
        data = new char[strlen(str) + 1];  // 动态分配内存
        strcpy(data, str);
    }

    // 自定义拷贝构造函数（深拷贝）
    MyClass(const MyClass& other) {
        data = new char[strlen(other.data) + 1];  // 分配新内存
        strcpy(data, other.data);  // 复制数据
    }

    // 析构函数
    ~MyClass() {
        delete[] data;  // 释放内存
    }

    void print() const {
        std::cout << data << std::endl;
    }
};

int main() {
    MyClass obj1("Hello");
    MyClass obj2 = obj1;  // 触发拷贝构造函数

    obj1.print();  // 输出 "Hello"
    obj2.print();  // 输出 "Hello"

    return 0;
}
