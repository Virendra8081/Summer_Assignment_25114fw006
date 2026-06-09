#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int n){

    int b = n, num = 0, digit = 0;
    bool flage = false;

    for(int i = n; i>0; i /= 10){

        digit++;
        
    }

    for( ; n>0; n /= 10){
        num = num + pow((n % 10), digit);
    }

    if(num == b)
        flage = true;

    return flage;



}

int main(){

    int n;

    cout<<" enter the number to check the armstrong number :";
    cin>>n;

    cout<<isArmstrong(n);
}