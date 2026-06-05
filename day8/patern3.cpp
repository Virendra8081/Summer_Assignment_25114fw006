#include<iostream>
using namespace std;

int main(){

     //print this patern. A
    //                    A B
     //                   A B C
     //                   A B C D 
     //                   A B C D E

    int n;

    cout<<" enter the number of rows :";
    cin>>n;

    for ( int i=1; i<=n; i++){
        char ch ='A';

        for (int j=1; j<=i ; j++){
        cout<<ch++<<" ";

        }
        cout<<endl;
    }
return 0;

}