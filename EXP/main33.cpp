#include <iostream>
#include <vector>
using namespace std;

int getMaxNotMoreThanTarget(int a, int b, int target) {
    // 如果两个数都大于目标值，返回0
    if (target < a && target < b) {
        return 0;
    }
    // 如果一个数大于目标值，一个数小于目标值，返回小于目标值的数
    if (target < a) {
        return b;
    }
    if (target < b) {
        return a;
    }
    // 两个数都小于目标值返回较大值
    return a > b ? a : b;
}

// 返回数组从start下标开始到数组末尾之和
int getSum(const vector<int>& array, int start) {
    int sum = 0;
    for (int i = start; i < array.size(); ++i) {
        sum += array[i];
    }
    return sum;
}

int getSumClosestToTarget(const vector<int>& array, int start, int target) {
    // 目标值小于0，不可能有这种情况，因为工时都是正整数
    if (target < 0) {
        return 0;
    }
    // 如果当前数组全部之和小于目标值直接返回
    int sum = getSum(array, start);
    if (sum <= target) {
        return sum;
    }
    // 取两部分较大值
    return getMaxNotMoreThanTarget(
        getSumClosestToTarget(array, start + 1, target - array[start]) + array[start],
        getSumClosestToTarget(array, start + 1, target),
        target
    );
}

int main() {
    vector<int> array = {2, 3, 5, 11, 8};
    const int TARGET = 17;
    cout << getSumClosestToTarget(array, 0, TARGET) << endl;
    return 0;
}
