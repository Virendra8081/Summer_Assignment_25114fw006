#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;

    while (n > 0) {
        count += n % 2;  // Add 1 if last bit is set
        n = n / 2;       // Remove last bit
    }

    return count;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of set bits = " << countSetBits(n);

        return 0;}