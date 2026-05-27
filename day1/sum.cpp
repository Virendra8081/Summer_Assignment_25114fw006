#include<iostream>
using namespace std;

int main(){

    int n, sum=0;

    cout<<"enter the number for calculate sum :";
    cin>>n;

    for(int i=0; i<=n; i++){
        sum+=i;
    }

    cout<<"sum of all the natural number = "<<sum;

    return 0;
}