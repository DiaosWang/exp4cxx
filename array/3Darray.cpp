# include<iostream>

int main(){
    int arr1[2][3][4] = {0,1,2,3,4,5,6,7,8};
    int (*arr2)[3][4] = &arr1[0];
    int *arr3[6];
    std::cout << typeid(&arr3).name() << std::endl; // PA6_Pi 指向shape为6的int*数组的指针
    std::cout << typeid(arr3).name() << std::endl; // A6_Pi 指向shape为6的int*数组
    std::cout << typeid(&arr1[0]).name() << std::endl; // PA3_A4_i  int (*)[3][4]
    return 0;
}