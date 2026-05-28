#include<iostream>
using namespace std;

int main(){

    int n , digit_sum=0;

    cout<<" enter the number :";
    cin>>n;

    for( ; n>0; n=n/10){
        digit_sum += n%10;
    }

    cout<<" sum of the digit of the given number = "<<digit_sum;

    return 0;


    
}