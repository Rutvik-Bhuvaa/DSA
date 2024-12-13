// find maximum element in given array
#include<iostream>
using namespace std;
int main(){
    int arr[6] = {6, 3, 9, 8, 7, 4};
    int largest = arr[0];

    for(int i=0; i<6; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    cout << "Largest element is: " << largest << endl;
    return 0;
}