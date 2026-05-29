#include<iostream>
using namespace std;
void isprime(int k){

    bool prime= true;


    for(int i=2; i<k; i++){

        if(k%i==0){

            prime= false;

            break;
            
        }
    }
    if(prime)
        cout<<k<<" ";
}

void rangePrime(int n){

    for (int i=2; i<=n;i++){

        isprime(i);
    }

}

int main(){

    int n;

    cout<<" enter the range to check prime number :";
    cin>>n;

    rangePrime(n);
}