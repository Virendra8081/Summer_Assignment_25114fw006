#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"enter the number to find multiplication table :";
    cin>>n;

    for(int i=1; i<=n; i++){

        cout<<n << "*" << i<<"=";

        cout<<n*i<<"\n";
    }
}