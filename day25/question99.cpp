#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> names = {
        "Virendra",
        "Aman",
        "Rohit",
        "Deepak",
        "Bharat"
    };

    sort(names.begin(), names.end());

    cout << "Attendance List:\n";
    for(string name : names) {
        cout << name << endl;
    }

    return 0;
}