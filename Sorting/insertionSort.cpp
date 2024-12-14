// Insertion sort

#include<iostream>
using namespace std;

void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    return;
}


void insertionSort(int arr[], int size){

     for(int i=0; i<size-1; i++){
            for(int j=i+1; j>0; j--){
                if(arr[j]<arr[j-1]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                }
                else{
                    break;
                }
            }
        }

        print(arr, size);

        return;
}

int main(){

    int arr[5] = {4, 1, 3, 9, 7};
    int size = (sizeof arr/sizeof arr[0]);

    insertionSort(arr, size);
    return 0;
}