#include<iostream>
using namespace std;

int main(){

    int n , product=1;

    cout<<" enter the number :";
    cin>>n;

    for ( ;n>0; n=n/10){

        product= product * (n%10);
    }

    cout<<product;
}