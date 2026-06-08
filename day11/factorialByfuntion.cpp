#include<iostream>
using namespace std;

int factorial( int n){

    if (n == 0 )
        return 1;

    int fact = 1;

    for( ; n>=1; n--){
        fact *= n;
    }

    return fact;

}

int main(){

    int n;

    cout<<" enter the number to find the factorial :";
    cin>>n;

    cout<<factorial(n);

    return 0;
}