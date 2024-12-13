// print all odd number in given array
#include<iostream>
using namespace std;

int main(){
    int arr[8] = {2, 3, 7, -11, 1, 8, 13, 12};

    for(int i=0; i<8; i++){
        if(arr[i]%2 == 1 || arr[i]%2 == -1){
            cout << arr[i] << " ";
        }
    }

    return 0;
}