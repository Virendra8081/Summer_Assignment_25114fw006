#include<iostream>
using namespace std;
int main(){
    int arr[6];
    int n=6;

    cout<<"enter the array elements";

    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    cout<<endl;

    for(int i=0;i<n-1;i++){
        bool flage=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flage=false;
            }
        }
        if(flage==true){
            break;
        }
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];

   
} 
return 0;}