#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, pos, value;
    
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Display Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Search Element\n";
        cout << "5. Find Maximum Element\n";
        cout << "6. Find Minimum Element\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Array Elements: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 2:
                cout << "Enter position (1 to " << n + 1 << "): ";
                cin >> pos;
                cout << "Enter value to insert: ";
                cin >> value;

                if (pos < 1 || pos > n + 1) {
                    cout << "Invalid Position!\n";
                } else {
                    for (int i = n; i >= pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos - 1] = value;
                    n++;
                    cout << "Element inserted successfully.\n";
                }
                break;

            case 3:
                cout << "Enter position to delete (1 to " << n << "): ";
                cin >> pos;

                if (pos < 1 || pos > n) {
                    cout << "Invalid Position!\n";
                } else {
                    for (int i = pos - 1; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    cout << "Element deleted successfully.\n";
                }
                break;

            case 4:
                cout << "Enter element to search: ";
                cin >> value;

                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        cout << "Element found at position " << i + 1 << endl;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Element not found.\n";
                }
                break;

            case 5: {
                int maxElement = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > maxElement)
                        maxElement = arr[i];
                }
                cout << "Maximum Element = " << maxElement << endl;
                break;
            }

            case 6: {
                int minElement = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] < minElement)
                        minElement = arr[i];
                }
                cout << "Minimum Element = " << minElement << endl;
                break;
            }

            case 7:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 7);

    return 0;
}