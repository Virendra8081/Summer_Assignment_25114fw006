#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<" enter the array length :";
    cin>>n;

    int arr[n];

    cout<<" enter the array elements :";

    for(int i= 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<" Array elements are :"<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}