#include<iostream>
using namespace std;

int main(){

    int n;

// Write a program to Print hollow square pattern.
// *****
// *   *
// *   *
// *   *
// *****

    cout<<" enter the number of rows :";
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<"*";

        for(int j=1; j<=n-1; j++ ){
            if(i==1 || i==n)
                cout<<"*";

            else
                cout<<" ";
        }
        cout<<"*";
        cout<<endl;

    }
}