// find prime number in given array

#include<iostream>
using namespace std;

void Prime(int number){

    if(number<2){
        cout << number << " is not a prime number";
        return;
    }

    for(int i=2; i<number; i++){
        if(number%i == 0){
            cout << number << " is not a prime number";
            return; 
        }
    }

    cout << number << " is prime number" << endl;
    return;
}

int main(){
    int arr[8] = {2, 3, 7, -11, 1, 8, 13, 12};

    for(int i=0; i<8; i++){
        Prime(arr[i]);
    }

    return 0;
}