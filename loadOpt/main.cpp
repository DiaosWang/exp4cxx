#include <iostream>
using namespace std;

class Box
{
   public:

      double getVolume(void)
      {
         return length * breadth * height;
      }
      void setLength( double len )
      {
          length = len;
      }

      void setBreadth( double bre )
      {
          breadth = bre;
      }

      void setHeight( double hei )
      {
          height = hei;
      }
      friend Box operator- (const Box&, const Box&); // 友元函数 ,其不是类成员函数，所以显示给出两个操作数
      // 重载 + 运算符，用于把两个 Box 对象相加
      Box operator+(const Box& b)  // `+` 作为双目运算符，在此另一个操作数是隐式的且是前操作数(为this) 
      {                            // 若为 rb = b1 + b2 ,则实际调用的是b1.operator+(b2)
         Box box;
         box.length = this->length + b.length;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
         return box;
      }
     
      /* `operator-`易于转化为友元函数，如下：
        friend void operator-(Box& ); 
        ...... 
        void operator-(Box& b) { 
            b.length = -b.length;
            b.breadth = -b.breadth;
            b.height = -b.height;
        }
      */
      void operator-(){ // -b1 等价于 b1.operator-()  
        this->length = - this->length;
        this->breadth = - this->breadth;
        this->height = - this->height; 
      }
      
      void operator--(){ // --b1/b1-- 等价于 b1.operator--()
        this->length -= 1;
        this->breadth -= 1;
        this->height -= 1; 
      }
                                          // `operator=`不适合转化为友元函数
      void operator= (const Box& later){  // 即便用户未重载`=`,默认也会重载一个浅拷贝的operator=函数
        if (this == &later) return;       // 区分于拷贝构造函数在`Box bx = b1+b2`，此重载函数在 `Box bx; bx= b1+b2;` 时用上
        cout << "this is `operator=` func" << endl;
        this->breadth = later.breadth;
        this->height = later.height;
        this->length = later.length;
      }
      Box operator()(double breadth, double height, double length){
        this->breadth = breadth;
        this->height = height;
        this->length = length;
        return *this; 
      }
      
   private:
      double length;      // 长度
      double breadth;     // 宽度
      double height;      // 高度
};

Box operator-(const Box& lhs, const Box& rhs){
    Box box; 
    box.length = lhs.length - rhs.length;
    box.breadth = lhs.breadth - rhs.breadth;
    box.height = lhs.height - rhs.height;
    return box;
}

int main( )
{
   Box Box1;                // 声明 Box1，类型为 Box
   Box Box2;                // 声明 Box2，类型为 Box
   Box Box3;                // 声明 Box3，类型为 Box
   double volume = 0.0;     // 把体积存储在该变量中
 
   // Box1 详述
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);
 
   // Box2 详述
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);
 
   // Box1 的体积
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 
   // Box2 的体积
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;

   // 把两个对象相加，得到 Box3
   Box3 = Box1 + Box2; // 此时调用的是`operator=`函数
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;

   // 把两个对象相减，得到 Box3
   Box Box4 = Box1 - Box2;   // 此时调用的时拷贝构造函数
   volume = Box4.getVolume();
   cout << "Volume of Box4 : " << volume <<endl;

   -Box1;
   cout << "Volume of -Box1 : " << Box1.getVolume()<< endl;

   --Box1;
   cout << "Volume of --Box1 : " << Box1.getVolume()<< endl;

   Box1(1.0,1.0,1.0);
   cout << "Volume of Box1(1.0,1.0,1.0): " << Box1.getVolume()<< endl;

   return 0;
}
