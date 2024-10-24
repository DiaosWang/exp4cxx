#include<vector>
#include<iostream>
#include <windows.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size(); 
        int left = 0, right = n-1; 
        // int pos = -1; 
        while(left<=right){
            cout << left << "  " << right << endl;  
            int mid = left + (right-left)>>1; 
            cout << "mid = " << mid << endl; 
            if(nums[mid] > target){
                right = mid;
                if(mid == left) 
                    break; 
            }
            else if(nums[mid] < target){
                left = mid + 1; 
            }
            else{
                left = mid;
                break;
            }
            
            Sleep(2000); 
        }

        return left;
    }
};

int main(){
    Solution so;
    vector<int> nums = {1,3,5,6}; 
    int target = 5; 
    cout << so.searchInsert(nums,target) << endl; 
}