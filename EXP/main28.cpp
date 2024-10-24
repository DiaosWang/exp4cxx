#include <iostream> 
#include <windows.h>
using namespace std; 

int main(){
    int a, b ; 
    // Ctrl+Z：在 Windows 中，Ctrl+Z 是文件结束符（EOF）的标准输入信号。在命令行中使用 Ctrl+Z 会将输入流标记为 EOF，scanf 或 cin 遇到 EOF 时通常会终止循环或读取。
    // Ctrl+D：在 Unix/Linux 系统中，Ctrl+D 是 EOF 的标准输入信号，用于表示输入的结束。在 Windows 系统中，Ctrl+D 通常没有直接影响，可能导致未定义的行为或不同的处理方式。
    while(cin >> a >> b ){     // 遇到EOF或其他错误，会返回false，否则返回true
        cout << a << b << endl; 
    }
    printf("finish cin"); 

     // 遇到EOF 返回EOF(-1),如果只成功读取了一个a，会返回成功读取的变量的数量，（e.g. 1）
    while(scanf("%d%d", &a, &b) != EOF){  // 作用等价上面的cin 使用  
        printf("%d  %d\n", a, b); 
        Sleep(1000);  
    }
    return 0 ;
}

// %d：读取十进制整数。
// %f：读取浮点数。
// %c：读取单个字符。(注意： 使用 " %c" 来忽略前面的换行符或空白符 )
// %s：读取字符串（不读取空格和\n，因此遇到这些相当于此字符串结束输入）。
// %x：读取十六进制整数。
// %ld：读取长整型数字。
// %lf：读取双精度浮点数。