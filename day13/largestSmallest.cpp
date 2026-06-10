#include<iostream>
using namespace std;

int main(){

    int n ;

    int max = INT_MIN;
    int min = INT_MAX;

    cout<<" enter the array length :";
    cin>>n;

    int arr[n];

    cout<<" enter the array elements :";

    for(int i= 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]>max)
            max = arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]<min)
            min = arr[i];
    }

    cout<<" maximum element in the given array = "<<max<<endl;
    cout<<" minimum element in the given array = "<<min<<endl;

    return 0;

}