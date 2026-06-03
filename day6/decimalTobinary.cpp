#include<iostream>
using namespace std;

int main(){

    int n,x=0,p=1;

    cout<<" enter the decimal number :";
    cin>>n;

    for(int i=n; n>0; n=n/2){
        x= x+ (n%2)*p;
        p=p*10;
    }


    cout<<" binary of the given decimal number ="<<x;
}