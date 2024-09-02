// #pragma once
#include<iostream> 
#include <thread>
using namespace std; 
class XIOStream
{
public:
    void Start();
    void Wait();
protected:
    virtual void Main() {
        cout << "Main Function of class XIOStream" << endl; 
    }
private:
    std::thread th_;
};

void XIOStream::Start()
{
    th_ = thread(&XIOStream::Main, this);
}
void XIOStream::Wait()
{
    if (th_.joinable())
        th_.join();
}


class Son : public XIOStream{
public:
    void Main(){
        cout << "Main Function of class Son" << endl; 
    }
};

int main(){  
    Son* sn = new Son ;  
    XIOStream* xi = sn ;
    xi->Start(); 
    xi->Wait(); 
    return 0; 
}