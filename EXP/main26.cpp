#include<iostream>
#include<vector> 

using namespace std;

int main(){
    vector<int> res = {2,2,3,4}; 

    for(int i = 0; i < 4;){
        int tmp = res[i++]*res[i];
        cout << tmp << endl; 
    }

    int i = 1; 
    int j = i++ + ++i ;  // 1 + 3
    i = 1; 
    int k = i++ + i++ ;  // 1 + 2 
    i = 1; 
    int m = i++;  // 1 
    i = 1; 
    int n = i++ + i;

    i = 1; 
    int o = ++i + i;

    cout<< "j = " << j << endl;
    cout<< "k = " << k << endl;
    cout<< "m = " << m << endl;  
    cout<< "n = " << n << endl;
    cout<< "o = " << o << endl;  
}