#include<iostream>
using namespace std;

int main(){

    int n, b;

    cout<<" enter the number :";
    cin>>n;

    b=n;
    int c=0;

    for( ; n>0; n=n/10){

        c = c*10+(n%10);

    }

    if(c==b)
        cout<<"number is pelindrome";
    else
        cout<<" number is not pelindrome";

    return 0;


    


}