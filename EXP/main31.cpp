#include<iostream>  
#include<string> 
using namespace std; 

int main(){
    string inStr, outStr;
    int k, n; 
    cin >> k;
    cin.get();  
    getline(cin, inStr); 
    n = inStr.length(); 
    if(k >= n )
        cout << inStr; 
    else{
        inStr.append(k,' ');
        for(int i = n-1; i >=0; i --)
            inStr[i+k] = inStr[i];
        for(int i = 0; i < k; i++)
            inStr[i] = inStr[i+n];
        cout << inStr.substr(0,n); 
    }
    return 0;
}