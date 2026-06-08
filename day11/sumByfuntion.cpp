#include<iostream>
using namespace std;

void twoSum(int a, int b, int sum){

    sum = a + b;

    cout<<" sum of the two number a & b = "<<sum;

}

int main(){

    int a, b,sum=0;

    cout<<" enter the value of a and b :";
    cin>>a>>b;

    twoSum( a,b,sum);
}