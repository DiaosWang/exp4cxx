1. 虚函数是实现多态性的基础;  
2. 纯虚函数用于定义抽象类（Abstract Class）。抽象类是不能直接实例化的类，通常用于作为接口或基类;  
3. 纯虚函数（Pure Virtual Function）是指在类中声明但不提供实现的虚函数, e.g. `virtual void myFunction() = 0;`。意味着该函数必须在派生类中被重写（override），否则派生类也将成为抽象类;  

ref: [C++多态](https://www.w3cschool.cn/cpp/cpp-polymorphism.html)  