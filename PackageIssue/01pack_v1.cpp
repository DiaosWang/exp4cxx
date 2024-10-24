#include<iostream> 
#include<vector> 
#include<algorithm> 
using namespace std; 

// 求解一个01背包问题 ACM输入模式
int main(){
    int M, N; // 背包空间为M 物品种类为N
    cin >> M >> N; 
    vector<int> weights(N, 0), values(N,0);
    for(int i = 0; i < N; i++) 
        cin >> weights[i]; 
    for(int i = 0; i < N; i++)  
        cin >> values[i];

    vector<vector<int> > dp(N+1, vector<int>(M+1,0)); 
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            if(j >= weights[i-1])  
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-weights[i-1]] + values[i-1]);
            else dp[i][j] = dp[i-1][j]; 
        }
    }
    cout << "dp matrix: " << endl; 
    for(int i = 0; i <= N; i++){
        for(int j = 0; j <= M; j++){
            cout << dp[i][j] << " "; 
        }
        cout << endl; 
    }

    cout << "result: " << dp[N][M] << endl;  
    return 0; 
}