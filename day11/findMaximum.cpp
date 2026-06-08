#include<iostream>
using namespace std;

void max(int a, int b){

    if (a>b)
        cout<<" a is max :";
    else
        cout<<" b is max :";
}

int main(){

    int a, b;

    cout<<" enter the value of a and b :";
    cin>>a>>b;

    max(a, b);
}