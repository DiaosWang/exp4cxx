#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    // 创建邻接表来存储社交网络中的连接
    vector<vector<int>> connect(1001);  // 假设最大节点编号为1000
    for (int i = 0; i < N; ++i) {
        int X, Y;
        cin >> X >> Y;
        connect[X].push_back(Y);
        connect[Y].push_back(X);  // 无向图，双向连接
    }

    int ans = 0;  // 统计影响力的用户数量
    queue<pair<int, int>> q;  // 队列用于BFS，存储 {当前节点，跳数}
    vector<bool> visited(1001, false);  // 记录是否访问过
    visited[M] = true;  // 标记起点为已访问
    q.push({M, 0});  // 起点入队，跳数为0

    // 开始BFS
    while (!q.empty()) {
        auto current = q.front();
        q.pop();
        int node = current.first;
        int depth = current.second;

        // 如果已经达到最大跳数，停止扩展
        if (depth == K) continue;

        // 遍历当前节点的所有邻居
        for (int neighbor : connect[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;  // 标记为已访问
                q.push({neighbor, depth + 1});  // 入队并增加跳数
                ans++;  // 统计可以影响的用户数量
            }
        }
    }

    // 输出结果
    cout << ans << endl;

    return 0;
}
