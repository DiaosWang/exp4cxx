#include<iostream> 
#include<vector> 
#include<algorithm>
using namespace std; 

int main(){
    int G, M;  // 分组数量, 背包空间 
    cin >> G >> M; 
    vector<vector<int>> w(G);  // w[i][j] 表示第i组中第j个物品占用的空间
    vector<vector<int>> v(G);  // v[i][j] 表示第i组中第j个物品具备的价值 
    
    int N; // 某组中物品数量 
    for(int i = 0; i < G; i++){
        cin >> N; 
        w.push_back(vector<int>(N));
        v.push_back(vector<int>(N));
        for(int j = 0; j < N; j++)
            cin >> w[i][j] >> v[i][j];
    }

    //01背包变种 
    vector<int> dp(M+1,0);  
    // 遍历每一组 
    for(int i = 0; i < G; i++){  // 组的index
        int minVal = *min_element(w[i].begin(), w[i].end()); // 这组的最小值
        for(int j = M; j >= minVal; j--){ // 表示当前空间 
            for(int k = 0; k < w[i].size(); k++){
                dp[j] = max(dp[j], dp[j-w[i][k]] + v[i][k]); 
            }
        }
    }
    cout << dp[M] << endl; 
    
    return 0; 
}