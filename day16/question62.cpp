#include<iostream>
#include<climits>
#include<cmath>
using namespace std;

int main(){
    int arr[]= {1,2,2,2,3,4,5,6,6,6,7,8,6,2,2,6,6,6};

    int n= sizeof(arr)/sizeof(arr[0]);

    int idx =0 ,count = INT_MIN;

    for(int i=0; i<n; i++){
        int k=0;
        for(int j=0; j<n; j++){
            if(arr[i]== arr[j])
            k++;}
            if(k>count){
                count = k;
            idx = i;}
    }

    cout<<" maximum frequency element =>"<<arr[idx];
}