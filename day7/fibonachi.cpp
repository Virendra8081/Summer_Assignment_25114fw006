#include<iostream>
using namespace std;

int nthdigit(int n){

    if(n==1 || n==2) 
    return 1;

    return (nthdigit(n-1) + nthdigit(n-2));
}

int main(){

    int n;

    cout<<" enter the number position of series :";
    cin>>n;

    int c= nthdigit(n);

    cout<<c;

    return 0; 
}