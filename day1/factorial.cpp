#include<iostream>
using namespace std;

int main(){

    int n ,fact;

    cout<<"enter the number to find factorial :";
    cin>>n;

    if(n<0){
        cout<<" invailed number ";
    }
    
    else if(n==0)
    cout<<1;

    else {
    for(int i=1; i<=n; i++){

     fact=fact *i;
    }

    cout<<"factorial of the given number = "<<fact;
    }
}