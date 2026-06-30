#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student students[100];
    int n = 0;
    int choice;

    do {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Roll Number: ";
                cin >> students[n].rollNo;

                cout << "Enter Name: ";
                cin >> students[n].name;

                cout << "Enter Marks: ";
                cin >> students[n].marks;

                n++;
                cout << "Student record added successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No records found.\n";
                } else {
                    cout << "\nStudent Records:\n";
                    cout << "Roll No\tName\tMarks\n";
                    for (int i = 0; i < n; i++) {
                        cout << students[i].rollNo << "\t"
                             << students[i].name << "\t"
                             << students[i].marks << endl;
                    }
                }
                break;

            case 3: {
                int roll;
                bool found = false;

                cout << "Enter Roll Number to Search: ";
                cin >> roll;

                for (int i = 0; i < n; i++) {
                    if (students[i].rollNo == roll) {
                        cout << "\nStudent Found:\n";
                        cout << "Roll No: " << students[i].rollNo << endl;
                        cout << "Name: " << students[i].name << endl;
                        cout << "Marks: " << students[i].marks << endl;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Student record not found.\n";
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