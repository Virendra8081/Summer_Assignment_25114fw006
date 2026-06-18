#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);

    int vowels = 0, consonants = 0;

    for(char ch : str) {
        // Convert lowercase to uppercase
        if(ch >= 'a' && ch <= 'z')
            ch = ch - 32;
            cout<<ch;
        }

    
    }

