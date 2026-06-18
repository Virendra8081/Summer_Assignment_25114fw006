#include <iostream>
#include<string>
using namespace std;

int main() {
    string str;

    cout<<" enter your string: ";
    getline(cin, str); // include space also

    int n = str.length()-1;
    int i = 0;

    while(i<n){
        swap(str[i],str[n]); // reversing string 
        i++;
        n--;
    }

    cout<<" Reverse String = "<<str;


    
}