#include<iostream> 
#include<vector> 
using namespace std; 

// 完全背包问题求解  ACM模式 
int main(){
    int M, N; // 背包空间为M 物品种类为N
    cin >> M >> N; 
    vector<int> weights(N, 0), values(N,0);
    for(int i = 0; i < N; i++) 
        cin >> weights[i]; 
    for(int i = 0; i < N; i++)  
        cin >> values[i];

    vector<int> dp(M+1,0);
    for(int i = 0; i < N; i++){
        for(int j = weights[i]; j <= M; j++){
            dp[j] = max(dp[j], dp[j-weights[i]] + values[i]); 
        }
        for(const auto & tmp : dp)
            cout << tmp << " "; 
        cout << endl; 
    } 

    // for(const auto & tmp : dp)
    //     cout << tmp << " "; 
    // cout << endl; 
    cout << "result: " << dp[M];
    
    return 0; 
}