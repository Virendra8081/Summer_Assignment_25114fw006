#include<iostream>
using namespace std;

int fact(int i){

    int factorial=1 ;

    for(int j=1; j<=i; j++){
        factorial=factorial*j;
    
    }
    return factorial;

}

int main(){

int n, sum=0;

cout<<" enter the number to check the  strong number :";
cin>>n;

for(int i=n; i>0; i=i/10){

   sum=sum + fact(i%10);
}

if(sum==n)
    cout<<" number is strong number:";

else
    cout<<" number is not strong number:";
}