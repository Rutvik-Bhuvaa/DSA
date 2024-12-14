// Bubble sort

#include<iostream>
using namespace std;

void print(int arr[], int size){
    
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return;
}

void bubbleSort(int arr[], int size){
        
        for(int i=0; i<size-1; i++){
            for(int j=0; j<size-i-1; j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        print(arr, size);

        return;
    
}


int main(){

    int arr[5] = {4, 1, 3, 9, 7};
    int size = (sizeof arr/sizeof arr[0]);
    
    bubbleSort(arr, size);

    return 0;
}