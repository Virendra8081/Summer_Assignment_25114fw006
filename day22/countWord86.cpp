#include<iostream>
#include<string>
#include<sstream>

using namespace std; 

int main(){

string str;

cout<<" enter your string :";

    getline(cin, str);

    stringstream  ss(str);

    string wr;
    int count = 0;

    while(ss>>wr){
        count++; 

    }

    cout<<" number of word = "<<count;


}