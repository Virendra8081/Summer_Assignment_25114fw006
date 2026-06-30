#include <iostream>
#include <string>
using namespace std;

class Ticket {
public:
    int ticketId;
    string passengerName;
    string destination;
};

int main() {
    Ticket tickets[100];
    int n = 0, choice;

    do {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display All Tickets\n";
        cout << "3. Search Ticket by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Ticket ID: ";
                cin >> tickets[n].ticketId;

                cout << "Enter Passenger Name: ";
                cin >> tickets[n].passengerName;

                cout << "Enter Destination: ";
                cin >> tickets[n].destination;

                n++;
                cout << "Ticket booked successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No tickets booked.\n";
                } else {
                    cout << "\nBooked Tickets:\n";
                    cout << "Ticket ID\tPassenger\tDestination\n";

                    for (int i = 0; i < n; i++) {
                        cout << tickets[i].ticketId << "\t\t"
                             << tickets[i].passengerName << "\t\t"
                             << tickets[i].destination << endl;
                    }
                }
                break;

            case 3: {
                int id;
                bool found = false;

                cout << "Enter Ticket ID to Search: ";
                cin >> id;

                for (int i = 0; i < n; i++) {
                    if (tickets[i].ticketId == id) {
                        cout << "\nTicket Found:\n";
                        cout << "Ticket ID      : " << tickets[i].ticketId << endl;
                        cout << "Passenger Name : " << tickets[i].passengerName << endl;
                        cout << "Destination    : " << tickets[i].destination << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Ticket not found.\n";

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