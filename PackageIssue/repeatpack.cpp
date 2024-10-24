#include<iostream>
#include<vector> 
using namespace std;

int main(){
    int M,N; // 背包空间  物品种类数 
    cin >> M >> N; 
    vector<int> weights(N,0), values(N,0), counts(N,0); // 重量  价值  个数
    for(int i= 0; i < N; i++)
        cin >> weights[i];
    for(int i= 0; i < N; i++)
        cin >> values[i];
    for(int i= 0; i < N; i++)
        cin >> counts[i];
    // 将物品使用二进制编码进行拆分  

    vector<int> w, v; // 新的拆分后的weights 和values 
    for(int i = 0; i < N; i++){
        int cnt = counts[i];  
        for(int shift = 1; shift <= cnt; shift <<= 1){
            cnt -= shift; 
            w.push_back(shift*weights[i]);
            v.push_back(shift*values[i]); 
        }   
        if(cnt != 0){
            w.push_back(cnt*weights[i]);
            v.push_back(cnt*values[i]);
        }
    }

    // 01背包求解 
    vector<int> dp(M+1, 0);
    for(int i = 0; i < w.size(); i++){
        for(int j = M; j >= w[i]; j--){
            dp[j] = max(dp[j] , dp[j-w[i]] + v[i]); 
        }
    }

    cout << dp[M] << endl; 
    return 0; 
}