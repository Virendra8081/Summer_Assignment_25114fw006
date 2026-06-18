#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout<<" enter your string: ";

    cin.getline(str, 100); // space also can also be taken 

    int len = 0;

    while(str[len] != '\0') { // calculate string including space
        len++;
    }

    cout << "Length = " << len;

    return 0;
}