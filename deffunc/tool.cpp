#include <iostream>
#include <ctime>

//  这三种形参方式等价，都是等待输入实参类型为int *（也就是一维int数组）  
void myFunction1(int *param){
  for(int i = 0 ; i < 3; i++ ){
    std::cout << param[i] << "  ";
  }
  std::cout << std::endl;
}

void myFunction2(int param[10]){  // 这里只是期待实参为int [10]，并不强求，也不检查
  for(int i = 0 ; i < 3; i++ ){
    std::cout << param[i] << "  ";
  }
  std::cout << std::endl;

  for(auto i : param){ //  这儿报错：this range-based 'for' statement requires a suitable "begin" function and none was found. 为啥？  
    std::cout << i << "  ";
  }
  std::cout << std::endl;
}

void myFunction3(int param[]){
  for(int i = 0 ; i < 3; i++ ){
    std::cout << param[i] << "  ";
  }
  std::cout << std::endl;
}


// 要生成和返回随机数的函数
int * getRandom( )
{
  static int r[10];

  // 设置种子
  srand( (unsigned)time( NULL ) );
  for (int i = 0; i < 10; ++i)
  {
    // r[i] = rand();
    std::cout << r[i] << std::endl;
  }

  return r;
}
