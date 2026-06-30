#include <iostream>
#include <string>
using namespace std;

class Contact {
public:
    int id;
    string name;
    string phone;
};

int main() {
    Contact contacts[100];
    int n = 0, choice;

    do {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display All Contacts\n";
        cout << "3. Search Contact by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Contact ID: ";
                cin >> contacts[n].id;

                cout << "Enter Name: ";
                cin >> contacts[n].name;

                cout << "Enter Phone Number: ";
                cin >> contacts[n].phone;

                n++;
                cout << "Contact added successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No contacts found.\n";
                } else {
                    cout << "\nContact List:\n";
                    cout << "ID\tName\tPhone Number\n";

                    for (int i = 0; i < n; i++) {
                        cout << contacts[i].id << "\t"
                             << contacts[i].name << "\t"
                             << contacts[i].phone << endl;
                    }
                }
                break;

            case 3: {
                int searchId;
                bool found = false;

                cout << "Enter Contact ID to Search: ";
                cin >> searchId;

                for (int i = 0; i < n; i++) {
                    if (contacts[i].id == searchId) {
                        cout << "\nContact Found:\n";
                        cout << "ID: " << contacts[i].id << endl;
                        cout << "Name: " << contacts[i].name << endl;
                        cout << "Phone Number: " << contacts[i].phone << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Contact not found.\n";

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