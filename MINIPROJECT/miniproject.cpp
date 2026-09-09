#include <iostream>
using namespace std;

class Bank {
private:

    class Account {
        int Accountnumber;
        double balance;

    public:

        Account() {
            Accountnumber = 0;
            balance = 0;
        }

        Account(int num, double amount) {
            Accountnumber = num;
            balance = amount;
        }

        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Amount Deposited Successfully\n";
                cout << "Updated Balance: " << balance << endl;
            }
            else {
                cout << "Invalid amount\n";
            }
        }

        void withdrawal(double amount) {
            if (amount <= 0) {
                cout << "Invalid amount\n";
            }
            else if (amount > balance) {
                cout << "Insufficient balance\n";
            }
            else {
                balance -= amount;
                cout << "Amount Withdrawn Successfully\n";
                cout << "Updated Balance: " << balance << endl;
            }
        }

        void display() {
            cout << "Account Number: " << Accountnumber << endl;
            cout << "Balance: " << balance << endl;
        }

        int getAccountNumber() {
            return Accountnumber;
        }
    };

public:

    // Array of nested class objects
    Account accounts[5];

    // Create accounts
    void createAccounts() {
        accounts[0] = Account(101, 50000);
        accounts[1] = Account(102, 30000);
        accounts[2] = Account(103, 40000);
        accounts[3] = Account(104, 25000);
        accounts[4] = Account(105, 60000);
    }

    // Find account
    int findAccount(int num) {
        for (int i = 0; i < 5; i++) {
            if (accounts[i].getAccountNumber() == num) {
                return i;
            }
        }

        return -1;
    }

    // Display all accounts
    void showAccounts() {
        cout << "\nALL ACCOUNTS:\n";

        for (int i = 0; i < 5; i++) {
            accounts[i].display();
        }
    }

    // Deposit money
    void depositMoney() {
        int num;
        double amount;

        cout << "\nEnter account number: ";
        cin >> num;

        int index = findAccount(num);

        if (index != -1) {
            cout << "Enter deposit amount: ";
            cin >> amount;

            accounts[index].deposit(amount);
        }
        else {
            cout << "ACCOUNT NOT FOUND\n";
        }
    }

    // Withdraw money
    void withdrawMoney() {
        int num;
        double amount;

        cout << "\nEnter account number: ";
        cin >> num;

        int index = findAccount(num);

        if (index != -1) {
            cout << "Enter withdrawal amount: ";
            cin >> amount;

            accounts[index].withdrawal(amount);
        }
        else {
            cout << "ACCOUNT NOT FOUND\n";
        }
    }

    // Show particular account
    void showParticularAccount() {
        int num;

        cout << "\nEnter account number: ";
        cin >> num;

        int index = findAccount(num);

        if (index != -1) {
            accounts[index].display();
        }
        else {
            cout << "ACCOUNT NOT FOUND\n";
        }
    }
};


int main() {

    Bank b;

    // Create accounts
    b.createAccounts();

    int choice;

    do {
        cout << "\n====== BANK MANAGEMENT SYSTEM ======\n";
        cout << "1. Show All Accounts\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Show Particular Account\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                b.showAccounts();
                break;

            case 2:
                b.depositMoney();
                break;

            case 3:
                b.withdrawMoney();
                break;

            case 4:
                b.showParticularAccount();
                break;

            case 5:
                cout << "Thank you for using the Bank Management System!\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}

