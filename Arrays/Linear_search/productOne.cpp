
// Minimum steps to make product equal to one

// Given an array arr[] containing N integers. In one step, any element of the array can either be increased or decreased by one. Find minimum steps required such that the product of the array elements becomes 1. 


#include<iostream>
using namespace std;

int makeProductOne(int arr[], int N){
    int zeroCount = 0;
    int steps = 0;
    int mul = 1;

    for(int i=0; i<N; i++){
        if(arr[i]>0){
            steps += (arr[i]-1);
            mul *= 1;
        }
        else if(arr[i]<0){
            steps += (-1-arr[i]);
            mul *= -1;
        }
        else{
            steps += 1;
            zeroCount++;
        }
    }

    if(mul==1 || zeroCount>0){
        return steps;
    }
    else{
        return steps + 2;
    }
}



int main(){
    int arr[3] = {-2, 4, 0};
    int N = (sizeof arr/ sizeof arr[0]);

    int totalSteps = makeProductOne(arr, N);
    cout << "Total steps: " << totalSteps;
    return 0;
}