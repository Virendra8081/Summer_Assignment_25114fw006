#include<iostream>
using namespace std ;

int main(){

    int  n , sum = 0, average =0;

    cout<<" enter the array length :";
    cin>>n;

    int  arr[n];

    cout<<" enter the array elements :";

    for(int i= 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i= 0; i<n; i++){
        sum += arr[i];
    }

    average =  sum / n ;

    cout<<" sum of array elements ="<<sum<<endl;
    cout<<" average of array elements ="<<average<<endl;
}