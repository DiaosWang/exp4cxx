#include<iostream>

class BaseClass{
    private:  // 类内代码才能访问 
        int age; 
    protected:  // 
        int level;
    public:
        int width, height;
        void coutAge(){
            std::cout << "age = " << age << std::endl;
        }
        void coutLevel(){
            std::cout << "level = " << level << std::endl; 
        }
        void coutWH(){
            std::cout << "width = " << width << "\nheight = " << height << std::endl;
        }
        BaseClass(){ 
            age = 31;
            level = 4; 
            width = 4;
            height = 5; 
        }
    
    // 声明友元函数, 不能直接在类内定义，只能在类内声明，在内外定义
    // 友元函数不是这个类的成员变量，所以不受public等的影响
    // 友元函数可以访问类的private成员变量 
    friend void printAge(BaseClass bc);
};

// 将父类的所有成员都继承下来，创建派生类对象时，会创建一个新的内存储存这些继承的成员变量/函数
class Son1 : public BaseClass{
    public:
        void coutAge2(){
            // // 这里的age继承自基类，储存在派生类对象的内存中，但是由于其来自基类并且访问权限是private，所以无法直接访问，但可以通过继承来的基类的public函数访问
            // std::cout << "coutAge2 func, age = " << age << std::endl; // 报错：member "BaseClass::age" (declared at line 5) is inaccessible

    
            std::cout << "this is coutAge2 in Class Son1 " << std::endl; 
            coutAge();
        }

};

void printAge(BaseClass bc){
    std::cout << "bc.age:" << bc.age << std::endl;
}

int main(){
    // BaseClass bc();   // 这个容易和类声明混淆
    // Son1 sn();

    
    BaseClass bc;
    Son1 sn; 
    
    
    // std::cout << bc.age << std::endl;  //无法获取age 
    // std::cout << sn.age << std::endl;  //基类中有private age，派生类中可以继承，但是无法直接访问

    
    sn.coutAge(); 
    sn.coutAge2();

    return 0;
}