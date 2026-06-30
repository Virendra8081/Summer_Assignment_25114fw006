#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int empId;
    string name;
    float salary;
};

int main() {
    Employee emp[100];
    int n = 0;
    int choice;

    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> emp[n].empId;

                cout << "Enter Employee Name: ";
                cin >> emp[n].name;

                cout << "Enter Salary: ";
                cin >> emp[n].salary;

                n++;
                cout << "Employee added successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No employee records found.\n";
                } else {
                    cout << "\nEmployee Records:\n";
                    cout << "ID\tName\tSalary\n";
                    for (int i = 0; i < n; i++) {
                        cout << emp[i].empId << "\t"
                             << emp[i].name << "\t"
                             << emp[i].salary << endl;
                    }
                }
                break;

            case 3: {
                int id;
                bool found = false;

                cout << "Enter Employee ID to Search: ";
                cin >> id;

                for (int i = 0; i < n; i++) {
                    if (emp[i].empId == id) {
                        cout << "\nEmployee Found:\n";
                        cout << "ID: " << emp[i].empId << endl;
                        cout << "Name: " << emp[i].name << endl;
                        cout << "Salary: " << emp[i].salary << endl;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Employee not found.\n";
                }
                break;
            }

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}