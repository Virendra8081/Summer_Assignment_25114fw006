#include<iostream>
using namespace std;

int main(){

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

int n;


cout<<" enter the value of n :";
cin>>n;

for (int i=1; i<=n; i++){
    char ch = 'A';
    for(int j=1; j<=n-i; j++){
        cout<<" ";
    }

    for(int k=1; k<=i; k++){
        cout<<ch++;
    }
    ch = 'A';
    for(char ch = 'A'+i-2; ch>='A'; ch-- ){
        cout<<ch;
    }

    cout<<endl;
}
}
