#include<list> 
#include<iostream>
#include<memory>
using namespace std; 

int main(){
    list<shared_ptr<int>> li = {} ; 
    cout << (li.front() == nullptr) << endl; 
    cout << li.front() << "---" << !li.front() << endl; 
    cout << li.empty() << endl; 
    return 0; 
}