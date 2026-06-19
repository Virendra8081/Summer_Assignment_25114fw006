#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    string result = "";

    for (char ch : str) {
        bool found = false;

        for (char c : result) {
            if (c == ch) {
                found = true;
                break;
            }
        }

        if (!found) {
            result += ch;
        }
    }

        cout << result;}