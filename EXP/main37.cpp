#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// 自定义比较器，按照 pair<int, int> 中的 first 和 second 排序
struct Compare {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second > b.second;  // 如果元素相等，比较索引，索引小的优先
        }
        return a.first > b.first;  // 元素小的优先
    }
};

// 获取数组中前 i 个最小元素
vector<pair<int, int>> getMinElements(vector<int>& arr, int i) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;

    // 将数组元素和索引插入优先队列
    for (int idx = 0; idx < arr.size(); ++idx) {
        pq.push({arr[idx], idx});
    }

    // 取出优先队列中的前 i 个最小元素
    vector<pair<int, int>> result;
    for (int j = 0; j < i && !pq.empty(); ++j) {
        result.push_back(pq.top());  // 保存当前堆顶元素（最小的元素）
        pq.pop();                    // 移除堆顶元素
    }

    return result;
}

int main() {
    vector<int> arr = {45, 88, 48, 48, 21, 73};  // 输入数组
    int i = 3;  // 希望获取前 i 个最小的元素

    // 获取数组中前 i 个最小的元素
    vector<pair<int, int>> result = getMinElements(arr, i);

    // 输出结果
    for (const auto& p : result) {
        cout << "元素值: " << p.first << ", 索引: " << p.second << endl;
    }

    for(int j = 0; j < i; j++){
        
    }

    return 0;
}
