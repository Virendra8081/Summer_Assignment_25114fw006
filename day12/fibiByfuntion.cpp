#include<iostream>
using namespace std;

void fiboSeries(int n){

    int a = 0;
    int b = 1;
    int c;

    for(int i = 1 ; i<=n; i++){

        cout<<a<<" ";

        c = a+b;
        a = b;
        b = c;

    }
}

int main(){

    int n;

    cout<<" enter the range to find fibo series :";
    cin>>n;

    fiboSeries(n);
}