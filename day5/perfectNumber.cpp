#include<iostream>
using namespace std; 

int main(){

    int n,sum=0;

    cout<<" enter the number to check the perfect number :";
    cin>>n;

    for(int i=1; i<n; i++){
        if(n%i==0){
            sum += i;
        }
    }

    if(sum==n)
        cout<<" given number is perfect number ";

    else
        cout<<" given number is not perfect number";

    return 0;
}