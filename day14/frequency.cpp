#include<iostream>
using namespace std;

int main(){

    int  n, x, count = 0;

    cout<<" enter the array length :";
    cin>>n;

    int  arr[n];

    cout<<" enter the array elements :";

    for(int i= 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<" enter the number to check frequency  ";
    cin>>x;

    for(int i=0; i<n; i++){
        if(arr[i]==x)
            count++;
    }

    cout<<" frequency of the given element = "<<count;


    return 0;
}