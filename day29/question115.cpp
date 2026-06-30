#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str, str2;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    do {
        cout << "\n===== STRING OPERATIONS MENU =====\n";
        cout << "1. Display String\n";
        cout << "2. Find Length\n";
        cout << "3. Concatenate Another String\n";
        cout << "4. Reverse String\n";
        cout << "5. Convert to Uppercase\n";
        cout << "6. Convert to Lowercase\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "String: " << str << endl;
                break;

            case 2:
                cout << "Length of string = " << str.length() << endl;
                break;

            case 3:
                cout << "Enter another string: ";
                getline(cin, str2);
                str += str2;
                cout << "After Concatenation: " << str << endl;
                break;

            case 4: {
                string temp = str;
                reverse(temp.begin(), temp.end());
                cout << "Reversed String: " << temp << endl;
                break;
            }

            case 5: {
                string temp = str;
                for (char &c : temp)
                    c = toupper(c);
                cout << "Uppercase String: " << temp << endl;
                break;
            }

            case 6: {
                string temp = str;
                for (char &c : temp)
                    c = tolower(c);
                cout << "Lowercase String: " << temp << endl;
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