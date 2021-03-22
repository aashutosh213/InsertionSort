#include <iostream>
// void print(int arr[], int n){
//     for(int i{0}; i<n; i++){
//         std::cout<< arr[i]<<"\t";
//     }
// }

void insertionSort(int arr[], int n){
    int temp{0}, hole{0};
    for(int i{1}; i<n;i++){
        temp= arr[i];
        hole = i;
        while(hole>0 && arr[hole -1] > temp){
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = temp;
        // print(arr, n);
        // std::cout<<std::endl;
    }
}

int main() {
    // Write C++ code here
    int arr[]{6,7,3,9,9,8,7,1};
    int n{*(&arr + 1) - arr};
    insertionSort(arr,n);
    
    for(int i{0}; i<n; i++){
        std::cout<< arr[i]<<std::endl;
    }

    return 0;
}