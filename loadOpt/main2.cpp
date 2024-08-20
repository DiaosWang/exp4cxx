#include <iostream>
#include <vector>
using namespace std;

// 假设一个实际的类
class Obj {
   static int i, j;
public:
   void f() const { cout << i++ << endl; }
   void g() const { cout << j++ << endl; }
   
   Obj* operator->() 
   {
     cout << "operator->() in Class Obj " << endl;
     return this;
   }
};

// 静态成员定义
int Obj::i = 10;
int Obj::j = 12;

// 为上面的类实现一个容器
class ObjContainer {
   vector<Obj> a;
public:
   void add(Obj& obj)
   { 
      a.push_back(obj);  // 调用向量的标准方法
   }
   friend class SmartPointer;
};

// 实现智能指针，用于访问类 Obj 的成员
class SmartPointer {
   ObjContainer oc;
   int index;
public:
   int retIndex(){
    return index;
   }
   int retSize(){
    return static_cast<int>(oc.a.size());
   }
   SmartPointer(ObjContainer& objc)
   { 
       oc = objc;
       index = -1;
   }
   // 返回值表示列表结束
   bool operator++() // 前缀版本
   { 
     ++index;
     if(index >= static_cast<int>(oc.a.size())) return false;
    //  if(oc.a[++index] == 0) return false;
     return true;
   }
   bool operator++(int) // 后缀版本
   { 
      return operator++();
   }
   // 重载运算符 ->
   Obj& operator->() 
   {
    //  if(!oc.a[index])
     if(index >= static_cast<int>(oc.a.size()))
     {
        cout << "Zero value";
        Obj* obj = new Obj();
        return *obj;  // 这种返回不合适，因为obj是堆上变量，这么return不好释放这个变量的内存，导致内存泄漏。但这里先用着吧，无伤大雅
     }
     return oc.a[index];
   }
};

int main() {
   const int sz = 10;
   Obj o[sz];
   ObjContainer oc;
   for(int i = 0; i < sz; i++)
   {
       oc.add(o[i]);
   }
   SmartPointer sp(oc); // 创建一个迭代器
   do {
      sp->f(); // 等价于 ( (sp.operator->()).operator->() )->f()
      sp->g();  // 如果(sp.operator->()) 返回的是一个指针，则对这个指针进行`->`访问其对象；如果(sp.operator->()) 返回的是一个对象，则继续对这个对象调用其重载`operator->`,直到返回的是指针，然后... 
   } while(sp++);
   return 0;
}
