// find minimum element in the array
#include<iostream> 
using namespace std;

int main(){
    int arr[8] = {-4, 7, 11, -2, 8, 170, 0, 11};
    int smallest = arr[0];

    for(int i=0; i<8; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    cout << "Smallest element is: " << smallest << endl;

    return 0;
}