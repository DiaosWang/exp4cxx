#include <iostream> 

int main(){
    int arr1[2][3] = {4,3,8,8,9,0}; 
    for(int i = 0; i < 2; i ++){
        for (int j = 0; j < 3; j ++){
            std::cout << arr1[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << *(*(arr1+1) + 1) << std::endl; // arr1[1][1]
    std::cout << arr1[1][1] << std::endl;
    int *p = &arr1[0][0];
    std::cout << *(p+1*3+1) << std::endl;


    // int (*arr2)[3] = &arr1; // 报错： a value of type "int (*)[2][3]" cannot be used to initialize an entity of type "int (*)[3]". 
    // int (*arr2)[3] = arr1;   // 这种方式可以，没有报错，并且等价于`int (*arr2)[3] = &arr1[0];`
    int (*arr2)[3] = &arr1[0]; // arr2 是一个`int (*)[3]`类型指针; arr1表示为二维数组，类型为int [2][3]，`&arr1`类型是`int (*)[2][3]`,也就是指向2x3int的指针(PA2_A3_i).
    for(int i = 0; i < 2; i ++){
        for (int j = 0; j < 3; j ++){
            std::cout << arr2[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << *(*(arr2+1) + 1) << std::endl; // arr1[1][1]
    std::cout << arr2[1][1] << std::endl;
    p = &arr2[0][0];
    std::cout << *(p+1*3+1) << std::endl;


    int (*arr3)[3] = new int[2][3]; // 然后相同遍历 
    delete[] arr3;


    int * arr4[2];  // 离散内存二维数组
    arr4[0] = new int[3];
    arr4[1] = new int[3];
    for(int i = 0; i < 2; i ++){
        for (int j = 0; j < 3; j ++){
            std::cout << arr4[i][j] << " ";
        }
        std::cout << std::endl;
    }
    delete[] arr4[0];
    delete[] arr4[1]; 


    int **arr5[2];  // 离散内存二维数组 
    arr5[0] = new int*[3];
    arr5[1] = new int*[3];
    for(int i = 0; i < 3; i++){
        arr5[0][i] = new int(i*3+1); // new int(i*3+1) 返回的是 int *
        arr5[1][i] = new int(i*3+2); 
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            delete arr5[i][j];  // 释放每个 new int(i*3+1) 和 new int(i*3+2)
        }
        delete[] arr5[i];  // 释放每个 new int*[3] 
    }


    return 0;
}