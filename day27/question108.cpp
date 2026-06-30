#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks[5];
    float total, percentage;

    void calculate() {
        total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        percentage = total / 5;
    }

    void displayGrade() {
        if (percentage >= 90)
            cout << "Grade: A+\n";
        else if (percentage >= 80)
            cout << "Grade: A\n";
        else if (percentage >= 70)
            cout << "Grade: B\n";
        else if (percentage >= 60)
            cout << "Grade: C\n";
        else if (percentage >= 50)
            cout << "Grade: D\n";
        else
            cout << "Grade: F\n";
    }
};

int main() {
    Student s;

    cout << "===== Marksheet Generation System =====\n";

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cout << "Enter Student Name: ";
    cin >> s.name;

    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> s.marks[i];
    }

    s.calculate();

    cout << "\n===== MARKSHEET =====\n";
    cout << "Roll Number : " << s.rollNo << endl;
    cout << "Name        : " << s.name << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << " Marks: " << s.marks[i] << endl;
    }

    cout << "Total Marks : " << s.total << "/500" << endl;
    cout << "Percentage  : " << s.percentage << "%" << endl;

    s.displayGrade();

    return 0;
}