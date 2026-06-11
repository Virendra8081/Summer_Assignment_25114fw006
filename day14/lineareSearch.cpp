#include<iostream>
using namespace std; 

int main(){

    int  n, x;
    bool flage = false;

    cout<<" enter the array length :";
    cin>>n;

    int  arr[n];

    cout<<" enter the array elements :";

    for(int i= 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<" enter the number to search ";
    cin>>x;

    for(int i=0; i<n; i++){
        if(arr[i]==x){
            flage = true;
            break;
            }
        }
    if(flage){
        cout<<" element found "<<endl;
    }
    else 
        cout<<" element is not found ";

    return 0;
}