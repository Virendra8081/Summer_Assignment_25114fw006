#include<iostream>
#include<string>
#include<algorithm>

using namespace std; 

int main(){

string str1;
string str2;


cout<<" enter your first string :";
getline(cin, str1);

cout<<" enter your second string :";
getline(cin, str2);

sort(str1.begin(), str1.end());
sort(str2.begin(), str2.end());

if(str1 == str2)
cout<<" strings are anagram";

else cout<<" strins are not anagram";

}