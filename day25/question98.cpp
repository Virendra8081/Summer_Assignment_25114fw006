#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string str1;
    string str2;
    string ans="";

    cout<<" enter your first string :";
    getline(cin, str1);

    cout<<" enter your second  string :";
    getline(cin, str2);

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    int i=0; // string one ke liye
    int j=0; // string two ke liye

   while(i<str1.length() && j<str2.length()){
    if(str1[i]== str2[j]){
        ans += str1[i];
        i++;
        j++;
    }
    else if( str1[i]>str2[j]) j++;

    else i++;
   }
    cout<<ans;

}

