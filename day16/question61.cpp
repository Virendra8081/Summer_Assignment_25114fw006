#include<iostream>
using namespace std;

int main(){

    // asuming that numbers states from 1 goes up to n in contineous manner;

    int arr[]= {1,2,3,4,0,6,7,8};

    int n = sizeof(arr)/sizeof(arr[0]);

    int arrsum = 0;

    for(int i=0; i<n; i++){
        arrsum += arr[i];
    }
    // calculating sum up to arr[n-1];
    
    int sum = arr[n-1]*(arr[n-1]+1)/2;

    int missingNumber= sum - arrsum;

    cout<<"Missing number => "<<missingNumber;


}