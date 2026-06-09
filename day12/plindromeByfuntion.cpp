#include<iostream>
using namespace std;

bool isPalindrome(int n){

    int rem = 0;
    int b= n;
    bool flage = false;

    for ( ; n>0; n /= 10){
        rem = rem * 10 + (n % 10);
    }

    if(rem == b){
        flage = true;
    }

    return flage;
}

int main(){

    int n;

    cout<<" enter the number to check the palindrome :";
    cin>>n;

    cout<<isPalindrome(n);

    return 0;

}