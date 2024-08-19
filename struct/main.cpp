#include <iostream>
#include <cstring>
 
using namespace std;
 
struct Books{
    char title[50] = "Default Title";  // 默认title
    char author[50];
    char subject[100];
    int book_id;
};

typedef struct Books Books; 

typedef struct
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
}defBooks;


int main(){
    Books Book1, Book2; 

    // Book1 详述
    strcpy( Book1.title, "Learn C++ Programming");
    strcpy( Book1.author, "Chand Miyan"); 
    strcpy( Book1.subject, "C++ Programming");
    Book1.book_id = 6495407;

    // Book2 详述
    strcpy( Book2.title, "Telecom Billing");
    strcpy( Book2.author, "Yakit Singha");
    strcpy( Book2.subject, "Telecom");
    Book2.book_id = 6495700;
 
    // 输出 Book1 信息
    std::cout << "Book 1 title : " << Book1.title <<std::endl;
    std::cout << "Book 1 author : " << Book1.author <<std::endl;
    std::cout << "Book 1 subject : " << Book1.subject <<std::endl;
    std::cout << "Book 1 id : " << Book1.book_id <<std::endl;

    // 输出 Book2 信息
    std::cout << "Book 2 title : " << Book2.title <<std::endl;
    std::cout << "Book 2 author : " << Book2.author <<std::endl;
    std::cout << "Book 2 subject : " << Book2.subject <<std::endl;
    std::cout << "Book 2 id : " << Book2.book_id <<std::endl;

    return 0;
}