#include<iostream>
using namespace std; 

int main(){

    int n, digit=0;

    cout<<"enter the number to count the digit :";
    cin>>n;

    for(int i=n; i>0;i=i/10 ) 
    digit++;

    cout<<"number of digits in the given number =" <<digit;
}
