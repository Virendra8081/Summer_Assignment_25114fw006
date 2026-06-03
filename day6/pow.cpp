#include<iostream>
using namespace std;

int main(){

    int n,x,y=1;

    cout<<" enter the number to find it's power: ";
    cin>>x;

    cout<<" enter the power to the number :";
    cin>>n;

    for(int i=1; i<=n; i++){
        y *=x;
    }

    cout<<y;


}