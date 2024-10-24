#include<iostream>
#include<string> 
using namespace std; 

int main(void)
{
    char line1[10];
    char line2[10];
    char line3[10];
    cout << "input what you want:" << endl;
    cin.get(line1, 10);  // 可以尝试输入 "123" ('\n'), 此时回车符将会留在输入队列中
    cin.get(line2, 10);  // 可以尝试输入 "456"，可以发现 line1 输入完后，这步直接被“跳过了”
    cin.get(line3, 10);  // 再次尝试
    cout << "line1:" << line1 << endl;  // 输出 "123"
    cout << "line2:" << line2 << endl;  // 输出空字符，由于 cin.get(line2, 10); 读入的是上一个字符输入结束时留输入队列中的回车符
    cout << "line3:" << line3 << endl; 
    string str; 
    getline(cin, str); 
    return 0;
}
