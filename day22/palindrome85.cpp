#include<iostream>
#include<string>
using namespace std; 

int main(){

string str;

cout<<" enter your string :";

getline(cin, str);

int n = str.length()-1;
int i=0;



bool flag = true;

while(i<=n){
    if(str[i] != str[n]){
        flag = false;
    }
    i++;
    n--;

}
if(flag) cout<<" string is palindrome ";
else cout<<" string is not palindrome ";


}