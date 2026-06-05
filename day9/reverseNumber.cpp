#include<iostream>
using namespace std;

int main(){

    int n;

// Write a program to Print reverse number triangle.
// 12345
// 1234
// 123
// 12
// 1

    cout<<" enter the number of rows :";
    cin>>n;

    for (int i =1; i<=n; i++){
        for(int j= 1; j<=n+1-i; j++ ){
            cout<<j;
        }
        cout<<endl;
    }


}