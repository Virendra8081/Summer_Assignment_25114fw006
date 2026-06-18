#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){

    string str;

    cout<<" enter your string ";

    getline(cin, str);

    stringstream ss(str);

    string wr;
    string k;
    while(ss>>wr){ 
        k += wr;

    }

    cout<<k;
}