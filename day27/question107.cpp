#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int empId;
    string name;
    float basicSalary, allowance, deduction, netSalary;

    void calculateSalary() {
        netSalary = basicSalary + allowance - deduction;
    }
};

int main() {
    Employee emp[100];
    int n = 0, choice;

    do {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Employee Salary Details\n";
        cout << "2. Display Salary Records\n";
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

                cout << "Enter Basic Salary: ";
                cin >> emp[n].basicSalary;

                cout << "Enter Allowance: ";
                cin >> emp[n].allowance;

                cout << "Enter Deduction: ";
                cin >> emp[n].deduction;

                emp[n].calculateSalary();
                n++;

                cout << "Salary record added successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No records found.\n";
                } else {
                    cout << "\nSalary Records:\n";
                    cout << "ID\tName\tBasic\tAllowance\tDeduction\tNet Salary\n";

                    for (int i = 0; i < n; i++) {
                        cout << emp[i].empId << "\t"
                             << emp[i].name << "\t"
                             << emp[i].basicSalary << "\t"
                             << emp[i].allowance << "\t\t"
                             << emp[i].deduction << "\t\t"
                             << emp[i].netSalary << endl;
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
                        cout << "\nEmployee Salary Details:\n";
                        cout << "ID: " << emp[i].empId << endl;
                        cout << "Name: " << emp[i].name << endl;
                        cout << "Net Salary: " << emp[i].netSalary << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Employee not found.\n";

                break;
            }

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}