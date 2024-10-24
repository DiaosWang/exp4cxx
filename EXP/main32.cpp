#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    // 定义 map<string, vector<string> >
    std::map<std::string, std::vector<std::string>> mp;

    // 插入一些键值对
    mp["banana"] = {"yellow", "yell"};
    mp["apple"] = {"red", "fruit"};
    mp["cherry"] = {"red", "tttt"};
    mp["apricot"] = {"orange", "fruit"};

    // 使用非 const 迭代器遍历 map，修改 second 部分
    for (auto& pair : mp) {  // 注意这里使用的是非 const 引用
        std::cout << pair.first << " -> ";
        auto &vec = pair.second;
        
        // 对 pair.second 进行排序
        std::sort(vec.begin(), vec.end());

        // 打印排序后的结果
        for (const auto& item : pair.second) {
            std::cout << item << " ";
        }
        std::cout << std::endl;
    }

    for(auto it = mp.begin(); it != mp.end(); it++){
        std::cout << it->first << "  "; 
    }
    std::cout << std::endl; 

    return 0;
}
