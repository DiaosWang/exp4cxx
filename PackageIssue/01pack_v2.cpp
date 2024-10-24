#include<iostream> 
#include<vector> 
#include<algorithm> 
using namespace std; 

// 求解一个01背包问题 ACM输入模式
// 优化版本，
// 我们发现01背包中对于dp[i][x]的求解只依赖于dp[i-1][x],因此可以将dp的dim=1的长度缩短为2,
// 又由于dp[i][j]只依赖于dp[i-1][j] 和dp[i-1][j-w_i],因此我们可以将dim=1的长度缩短为1，即dp为一维数组，并且保证遍历物品i时dp的idx从M -> 0 
// 又由于dp[j] 只有j >= weights[i]时才可能选定，因为此时才有空间来考虑是否选择物品i，因此idx只需要遍历M -> weights[i]
int main(){
    int M, N; // 背包空间为M 物品种类为N
    cin >> M >> N; 
    vector<int> weights(N, 0), values(N,0);
    for(int i = 0; i < N; i++) 
        cin >> weights[i]; 
    for(int i = 0; i < N; i++)  
        cin >> values[i];

    /*    new version    */
    vector<int> dp(M+1,0);
    for(int i = 0; i < N; i++){  //遍历物品i
        for(int j = M; j >= weights[i]; j--){
            dp[j] = max(dp[j], dp[j-weights[i]] + values[i]); 
        }
        for(const auto & tmp : dp)
            cout << tmp << " "; 
        cout << endl; 
    }
    for(int j = 0 ; j <= M; j++)
        cout << dp[j] << " "; 
    cout << "result: " << dp[M] << endl;
    /*    old version     */
    // vector<vector<int> > dp(N+1, vector<int>(M+1,0)); 
    // for(int i = 1; i <= N; i++){
    //     for(int j = 1; j <= M; j++){
    //         if(j >= weights[i-1])  
    //             dp[i][j] = max(dp[i-1][j], dp[i-1][j-weights[i-1]] + values[i-1]);
    //         else dp[i][j] = dp[i-1][j]; 
    //     }
    // }
    // cout << "dp matrix: " << endl; 
    // for(int i = 0; i <= N; i++){
    //     for(int j = 0; j <= M; j++){
    //         cout << dp[i][j] << " "; 
    //     }
    //     cout << endl; 
    // }
    // cout << "result: " << dp[N][M] << endl;  

    return 0; 
}