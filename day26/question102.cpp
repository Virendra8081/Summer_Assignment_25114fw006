#include <iostream>
using namespace std;

int main() {
    string name, citizenship;
    int age;

    cout << "===== Voting Eligibility System =====\n";

    cout << "Enter your name: ";
    getline(cin, name);

    cout<<" enter your citizenship ";
    getline(cin, citizenship);

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18 && citizenship == "India") {
        cout << "\nHello " << name << "!\n";
        cout << "You are eligible to vote.\n";
    }
    else if(age < 18 && citizenship == "India") {
        cout << "\nHello " << name << "!\n";
        cout << "You are not eligible to vote.\n";
        cout << "You can vote after " << (18 - age) << " year(s).\n";
    }

    else if(age>18 && citizenship !="India") {
        cout << "\nHello " << name << "!\n";
        cout << "You are not eligible to vote.\n";
        cout << " first get the citizenship of India \n ";
    }

    else{
        cout<<" first get the citizenship of India ";
        cout << "You can vote after " << (18 - age) << " year(s).\n";
    }

    return 0;
}