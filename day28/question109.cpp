#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int bookId;
    string title;
    string author;
};

int main() {
    Book books[100];
    int n = 0, choice;

    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Book ID: ";
                cin >> books[n].bookId;

                cout << "Enter Book Title: ";
                cin >> books[n].title;

                cout << "Enter Author Name: ";
                cin >> books[n].author;

                n++;
                cout << "Book added successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No books available.\n";
                } else {
                    cout << "\nBook Records:\n";
                    cout << "ID\tTitle\tAuthor\n";

                    for (int i = 0; i < n; i++) {
                        cout << books[i].bookId << "\t"
                             << books[i].title << "\t"
                             << books[i].author << endl;
                    }
                }
                break;

            case 3: {
                int id;
                bool found = false;

                cout << "Enter Book ID to Search: ";
                cin >> id;

                for (int i = 0; i < n; i++) {
                    if (books[i].bookId == id) {
                        cout << "\nBook Found:\n";
                        cout << "Book ID : " << books[i].bookId << endl;
                        cout << "Title   : " << books[i].title << endl;
                        cout << "Author  : " << books[i].author << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Book not found.\n";

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