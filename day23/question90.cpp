#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter your string: ";
    getline(cin, str);

    int freq[256] = {0};

    for(char ch : str) {
        freq[(unsigned char)ch]++;

        if(freq[(unsigned char)ch] == 2) {
            cout << "First repeating character: " << ch;
            return 0;
        }
    }

    cout << "No repeating character found";
}