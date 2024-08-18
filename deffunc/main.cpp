#include <iostream> 

extern int * getRandom();
extern void myFunction1(int *); 
extern void myFunction2(int [10]);
extern void myFunction3(int []);

int main ()
{
   // 一个指向整数的指针
   int *p;
   p = getRandom();  // getRandom 函数返回的是static local int[]. 静态局部变量可以在别的文件下被访问并修改？ 是的;  静态全局变量可以在别的文件下被访问并修改，不能被访问和修改. 
   for ( int i = 0; i < 10; i++ )
   {   
        *(p+i) += 1;  
        std::cout << "*(p + " << i << ") : ";
        std::cout << *(p + i) << std::endl;
   }

   int a[3] = {22,33,55};
   for(auto i : a){
      std::cout << i << "  ";
   }
   std::cout << std::endl;
   myFunction1(a);
   myFunction2(a);
   myFunction3(a);



   return 0;
}
