// Give me the repeated element in an array

#include<iostream>
using namespace std;

int main(){
    int arr[4] = {1, 2, 3, 1};
    int size = (sizeof arr/sizeof arr[0]);
    int count[4] = {0};
    int sizeCount = (sizeof count/sizeof count[0]);

    for(int i=0; i<size; i++){
        count[arr[i]]++;
    }

    for(int i=0; i<sizeCount; i++){
        if(count[i] > 1){
            cout << i << " ";
        }
    }
    return 0;
}