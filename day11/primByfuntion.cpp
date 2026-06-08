#include<iostream>
using namespace std;

bool isPrime(int n){

    bool flage = true;

    for(int i= 2; i<n; i++ ){

        if(n % i == 0){
            flage = false;
            break;
        }
    }

    return flage;
}

int main(){

    int n;

    cout<<" enter the number to check the prime :";
    cin>>n;

    cout<<isPrime(n);
}