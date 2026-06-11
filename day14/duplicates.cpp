#include<iostream>
using namespace std;

int main(){

    int  n, x, count =0;

    cout<<" enter the array length :";
    cin>>n;

    int  arr[n];

    cout<<" enter the array elements :";

    for(int i= 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<" enter the number to search duplicate ";
    cin>>x;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j]==x){
                count++;
                if(count >= 2){
                    cout<<"duplicate fount at position = "<<j;
                    break;
                }
                    
            }
        }
        if(count >= 2){
            break;
        }
    }

}