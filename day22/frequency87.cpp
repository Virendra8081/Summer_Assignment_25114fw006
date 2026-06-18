#include<iostream>
#include<string>

using namespace std; 

int main(){

string str;

cout<<" enter your string :";

getline(cin, str);

int max = 0;
int idx = -1;

for(int i =0; i<str.length(); i++){
    int count = 1;
    for(int j = i+1; j<str.length(); j++){
        if(str[i] == str[j]) count++;
    }
    if(max<count) {
        max = count;
        idx = i;
    }
}
cout<<" max frequency is = "<<max<<" of character "<<str[idx];

}
