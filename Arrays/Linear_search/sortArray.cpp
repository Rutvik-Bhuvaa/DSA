// array containing 0s, 1s and 2s and sort it in ascending order

#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,0,2,1,0};
    int size = (sizeof arr/sizeof arr[0]);
    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;

    for(int i=0; i<size; i++){
        if(arr[i]==0)
            countZero++;
        else if(arr[i]==1)
            countOne++;
        else
            countTwo++;
    }

    for(int i=0; i<countZero; i++){
        arr[i] = 0;
    }

    for(int i=countZero; i<countZero+countOne; i++){
        arr[i] = 1;
    }

    for(int i=countZero+countOne; i<size; i++){
        arr[i] = 2;
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}