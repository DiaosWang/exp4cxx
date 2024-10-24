#include<iostream> 
#include<vector> 
using namespace std; 

// 求解一个01背包问题 ACM输入模式
int main(){
    int M, N; // 背包空间为M 物品种类为N
    cin >> M >> N; 
    vector<int> weighs(N, 0), values(N,0);
    for(int i = 0; i < N; i++)  
        cin >> weighs[i];
    for(int i = 0; i < N; i++)  
        cin >> values[i];

    vector<int> dp(N+1, vector<int>(M+1,0)); 
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            if(j >= weighs[i-1])
        }
    }

    cout << "this is simple sample " << endl;  
    return 0; 
}