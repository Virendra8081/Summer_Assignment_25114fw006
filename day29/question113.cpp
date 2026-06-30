#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    do {
        cout << "\n===== Menu-Driven Calculator =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 + num2;
                cout << "Result = " << result << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << "Result = " << result << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 * num2;
                cout << "Result = " << result << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;

                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result = " << result << endl;
                } else {
                    cout << "Error! Division by zero is not allowed.\n";
                }
                break;

            case 5:
                cout << "Exiting Calculator...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}