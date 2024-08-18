#include <iostream> 

void printArray(int *arr, int num_arr=5){
    for (int i = 0; i < num_arr; i ++){
        std::cout << *(arr+i) << " " ;
    }
    std::cout << std::endl; 
}

int main(){
    int arr1[5] = {2,3,4,5,1};
    int arr2[5] = {1};
    printArray(arr1, 5); // 2 3 4 5 1
    printArray(arr2, 5); // 1 0 0 0 0

    int* arr3[5]; // 声明一个包括5个int* 的数组，来构建内存不连续的一维数组 
    for (int i = 0; i < 5; i ++)
        arr3[i] = new int(i*5);
    for (int i = 0; i < 5; i ++)
        std::cout << *arr3[i] << " " ;  // 0 5 10 15 20
    std::cout << std::endl; 
    for (int i = 0; i < 5; i ++)
        delete arr3[i];  // 逐个释放每个指针所指向的内存

    int* arr4 = new int[5]; 
    printArray(arr4,5);   // 15669952 0 15663440 0 0
    delete[] arr4;

    std::cout << "\ncout int(*)[5] : "<< std::endl;
    int (*arr5)[5]; // int (*arr5)[5] 是一种指向具有 5 个 int 类型元素的数组的指针, 这种类型的指针用于引用一个具有固定大小（5 个元素）的数组
    // arr5 = new int[5]; // 这里会报错： a value of type "int *" cannot be assigned to an entity of type "int (*)[5]" 
    arr5 = new int[2][5]; // 这里其实是一个二维数组
    for(int i = 0 ; i < 2; i ++){
        for (int j = 0; j < 5; j ++){
            std::cout << (*(arr5+i))[j] << " ";  // 15669952 0 15663440 0 0 
        }                                        // 0 50331651 2350 15669952 0
        std::cout << std::endl;
    }
    delete[] arr5;

    return 0; 
}