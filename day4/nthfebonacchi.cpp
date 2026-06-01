#include<iostream>
using namespace std;

int nthfibo(int n){

    if(n==1 || n==2)
        return 1;

    return nthfibo(n-1)+nthfibo(n-2);
}

int main(){

    int n;

    cout<<" enter the n th term of the fibonacchi series :";
    cin>>n;

    cout<<nthfibo(n);


}