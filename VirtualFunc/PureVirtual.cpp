#include<iostream>

// 抽象类
class Shape {
   protected:
      int width, height;
   public:
      Shape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }
      // 提供接口框架的纯虚函数
      virtual int area() = 0;
};

int main(){
    return 0; 
}