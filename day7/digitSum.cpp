#include<iostream>
using namespace std;

int digitSum(int n, int sum){

   
    if (n==0)
        return sum;

    sum = sum+(n%10);


    return digitSum(n/10, sum);
}

int main(){

    int n;
     int sum=0;

    cout<<" enter the number to find the digit sum :";
    cin>>n;

int c = digitSum(n, sum);

cout<<c;

}