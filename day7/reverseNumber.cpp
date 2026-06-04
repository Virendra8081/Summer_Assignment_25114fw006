#include<iostream>
using namespace std;

int reverse(int n,int number ){

    if (n==0)
        return number;

    number = number * 10 + (n%10) ;


   return reverse (n/10, number );
}



int main(){

    int n,x=1;

    cout<<" enter the number to find reverse  :" ;
    cin>>n;

int number=0;

cout<<reverse(n, number );

}