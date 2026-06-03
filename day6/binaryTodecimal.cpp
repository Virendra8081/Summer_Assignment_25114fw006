#include<iostream>
using namespace std;

int main(){

    int n, sum=0, x=1;

    cout<<" enter the binary number :";
    cin>>n;

    for(int i=n; i>0; i=i/10){

        sum=sum+(i%10)*x;

        x=x*2;

    }
    cout<<" decimal of the given binary ="<<sum;

    return 0;
}