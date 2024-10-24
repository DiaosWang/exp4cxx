#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    
    // 输入字符串长度和字符串
    cin >> n >> s;
    
    int modifications = 0;
    
    // 遍历字符串，检查相邻字符
    for (int i = 1; i < n;) {
        if (s[i] == s[i - 1]) {
            // 如果相邻字符相同，修改一个字符
            modifications++;
            // 修改为不同的字符（实际值不重要，只需保证不相同）
            s[i] = (s[i] == 'a') ? 'b' : 'a';
            i += 2; 
        } else {
            i++;
        }
    }
    
    // 输出最少的修改次数
    cout << modifications << endl;
    
    return 0;
}
