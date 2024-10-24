#include<vector> 
#include<iostream> 

using namespace std; 

int main(){
    int n;
    cin >> n; // 输入数组长度
    vector<long long> arr(n);

    // 输入数组
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    bool isAdd = true; 
    for(int i = n; i > 1; i--){ // i表示arr中的元素数量  
        for(int j = 0; j < i-1; j++){
            if(isAdd)
                arr[j] = arr[j] + arr[j+1];
            else 
                arr[j] = arr[j] - arr[j+1];  
            isAdd = !isAdd;  
        }
    }
    while(arr[0] < 0) arr[0] += 1000000007;  
    cout << arr[0] % 1000000007 << endl; 

    return 0; 
}