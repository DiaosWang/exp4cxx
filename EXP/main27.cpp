#include<iostream> 

int main(){
    int nums[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};

    for(int i = 0; i < 3;){
        nums[i] = nums[i]*nums[i++]; 
    }

    for(int i = 0; i < 10 ;i ++)
        std::cout << nums[i] << std::endl; 
}
