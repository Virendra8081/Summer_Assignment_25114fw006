#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter your string: ";
    getline(cin, str);

    int freq[256] = {0};

    // Count frequencies
    for(char ch : str) {
        freq[(unsigned char)ch]++;
    }

    // Find first non-repeating character
    for(char ch : str) {
        if(freq[(unsigned char)ch] == 1) {
            cout << "First non-repeating character: " << ch;
            return 0;
        }
    }

    cout << "No non-repeating character found";
}