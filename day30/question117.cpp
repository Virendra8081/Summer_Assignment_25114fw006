#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;

    int rollNo[MAX];
    string name[MAX];
    int marks[MAX];

    int n = 0, choice;

    do {
        cout << "\n===== STUDENT RECORD SYSTEM =====\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (n < MAX) {
                    cout << "Enter Roll Number: ";
                    cin >> rollNo[n];

                    cin.ignore();
                    cout << "Enter Student Name: ";
                    getline(cin, name[n]);

                    cout << "Enter Marks: ";
                    cin >> marks[n];

                    n++;
                    cout << "Record Added Successfully!\n";
                } else {
                    cout << "Record Limit Reached!\n";
                }
                break;

            case 2:
                if (n == 0) {
                    cout << "No Records Found!\n";
                } else {
                    cout << "\nRoll No\tName\t\tMarks\n";
                    cout << "---------------------------------\n";
                    for (int i = 0; i < n; i++) {
                        cout << rollNo[i] << "\t"
                             << name[i] << "\t\t"
                             << marks[i] << endl;
                    }
                }
                break;

            case 3: {
                int searchRoll;
                bool found = false;

                cout << "Enter Roll Number to Search: ";
                cin >> searchRoll;

                for (int i = 0; i < n; i++) {
                    if (rollNo[i] == searchRoll) {
                        cout << "\nStudent Found:\n";
                        cout << "Roll Number: " << rollNo[i] << endl;
                        cout << "Name: " << name[i] << endl;
                        cout << "Marks: " << marks[i] << endl;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Student Record Not Found!\n";
                }
                break;
            }

            case 4:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}