#include<iostream>
using namespace std;

int main(){

    int n;

// Write a program to Print reverse star pattern.
// *****
// ****
// ***
// **
// *

    cout<<" enter the value of rows :";
    cin>>n;

    for (int i =1; i<=n; i++){
        for(int j= n+1-i; j>=1; j-- ){
            cout<<"*";
        }
        cout<<endl;
    }
}