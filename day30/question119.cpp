#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int empId;
    string name;
    string department;
    float salary;
};

int main() {
    Employee emp[100];
    int n = 0, choice;

    do {
        cout << "\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee Salary\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Employee ID: ";
            cin >> emp[n].empId;

            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, emp[n].name);

            cout << "Enter Department: ";
            getline(cin, emp[n].department);

            cout << "Enter Salary: ";
            cin >> emp[n].salary;

            n++;
            cout << "Employee Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No employee records found.\n";
            } else {
                cout << "\nEmployee Records:\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nEmployee ID: " << emp[i].empId;
                    cout << "\nName: " << emp[i].name;
                    cout << "\nDepartment: " << emp[i].department;
                    cout << "\nSalary: " << emp[i].salary;
                    cout << "\n----------------------";
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
                    cout << "\nEmployee Found!";
                    cout << "\nName: " << emp[i].name;
                    cout << "\nDepartment: " << emp[i].department;
                    cout << "\nSalary: " << emp[i].salary;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";

            break;
        }

        case 4: {
            int id;
            bool found = false;

            cout << "Enter Employee ID: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (emp[i].empId == id) {
                    cout << "Enter New Salary: ";
                    cin >> emp[i].salary;
                    cout << "Salary Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";

            break;
        }

        case 5: {
            int id;
            bool found = false;

            cout << "Enter Employee ID to Delete: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (emp[i].empId == id) {
                    for (int j = i; j < n - 1; j++) {
                        emp[j] = emp[j + 1];
                    }
                    n--;
                    found = true;
                    cout << "Employee Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";

            break;
        }

        case 6:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}