// Selection sort

#include<iostream>
using namespace std;

void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return;
}

void selectionSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
            int index = i;
            for(int j=i; j<size; j++){
                if(arr[j]<arr[index]){
                    index = j;
                }
            }
    
            int temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
    }

    print(arr, size);

    return;
}

int main(){
 
    int arr[5] = {4, 1, 3, 9, 7};
    int size = (sizeof arr/sizeof arr[0]);

    selectionSort(arr, size);
    
    return 0;
}