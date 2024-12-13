// Rotate array by one step

#include<iostream>
using namespace std;

int main(){
    int arr[8] = {2, 3, 7, -11, 1, 8, 13, 12};
    int lastNumber = arr[7];

    for(int i=6; i>=0; i--){
        arr[i+1] = arr[i];
    }

    arr[0] = lastNumber;

    for(int i=0; i<8; i++){
        cout << arr[i] << " "; 
    }
    return 0;
}