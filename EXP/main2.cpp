#include <iostream>
#include <memory>
using namespace std;
class XData
{
public:
    XData()
    {
        cout << "Create XData" << endl;
    }
    ~XData()
    {
        cout << "Drop XData" << endl;
    }
};
int main(int argc,char *argv[])
{
    auto sp3 = make_shared<XData>();
    cout << "sp3.use_count() = " << sp3.use_count() << endl;
    cout << "before sp3.reset()" << endl; 
    sp3.reset();
    cout << "after sp3.reset()" << endl; 
    cout << "sp3.reset() sp3.use_count() = " << sp3.use_count() << endl;
    sp3 = nullptr;
    cout << "after sp3 = nullptr" << endl; 
    cout << "sp3.reset() sp3.use_count() = " << sp3.use_count() << endl;

    auto sp4 = make_shared<XData>();
    sp3 = sp4; 
    cout << "after sp3 = sp4, sp3.use_count() = " << sp3.use_count() << endl; 

    return 0;
}
