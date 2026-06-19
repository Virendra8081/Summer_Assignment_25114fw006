#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    if (s1.length() != s2.length()) {
        cout << "Not a rotation";
    }
    else if ((s1 + s1).find(s2) != string::npos) {
        cout << "Rotation";
    }
    else {
        cout << "Not a rotation";
    }

    return 0;
}