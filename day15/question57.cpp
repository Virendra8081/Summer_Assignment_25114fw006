#include<iostream>
#include<cmath>
using namespace std; 
int main(){

    int  n;

    cout<<" enter the array length :";
    cin>>n;

    int  arr[n];

    int i=0, j= n-1;

    cout<<" enter the array elements :";

    for(int i= 0; i<n; i++){
        cin>>arr[i];
    }

    while(i<=j){
        swap(arr[i], arr[j]);  // by two pointer approch
        i++;
        j--;

    }

    cout<<" reverse array is -> ";

    for (int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    

}