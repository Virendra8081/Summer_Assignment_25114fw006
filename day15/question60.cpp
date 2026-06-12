#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 2, 0, 3, 4, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int j = 0; // Position for next non-zero element

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    cout << "Array after moving zeros to the end:\n";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}