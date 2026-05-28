#include<iostream>
using namespace std;

int main(){
    
    int originalNumber, reverseNumber=0;

    cout<<" enter the original number :";
    cin>>originalNumber;

    for(int i=originalNumber; i>0; i=i/10){

        reverseNumber= reverseNumber * 10+ (i%10);

    }

    cout<<" Reverse number of Original number = "<<reverseNumber;



}