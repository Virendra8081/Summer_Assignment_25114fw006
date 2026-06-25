#include <iostream>
using namespace std;

int main() {

    int pin;
    int correctPin = 1234;
    int attempts = 3;
    bool flag = false;

    while (attempts > 0) {
        cout << "Enter ATM PIN: ";
        cin >> pin;

        if (pin == correctPin) {
            cout << "Login Successful!" << endl;
            flag = true;
            break;
        }

        attempts--;
        cout << "Incorrect PIN. Attempts left: "<< attempts << endl;

        if(attempts== 0){
            cout<<" your card has been block for security reason";
            return 0;
        }
    }

    int choice;
    double balance = 1000.0; // Initial balance
    double amount;

    if (flag){

        cout << "===== ATM SIMULATION =====\n";

    while (true) {
        cout << "\n1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: ₹" << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ₹";
                cin >> amount;

                if(amount<0) cout<<"invailed amount enter ";
                else {balance += amount;
                cout << "Deposit successful.\n";
                cout<<" your current balance is ->"<<balance;
                }
                break;
                

            case 3:
                cout << "Enter amount to withdraw: ₹";
                cin >> amount;

                if (amount > balance) {
                    cout << "Insufficient balance!\n";
                } 
                else if(amount<0){
                    cout<<"enter amount is invailed ";
                }
                else {
                    balance -= amount;
                    cout << "Withdrawal successful.\n";
                    cout<<" your current balance is ->"<<balance;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM.\n";
                return 0;

            default:
                cout << "Invalid choice!\n";
        }
    }

    }

    return 0;
    
}
