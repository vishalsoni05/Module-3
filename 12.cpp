//4. Write a C++ program to implement a class called Bank Account that has
//private member variables for account number and balance. Include
//member functions to deposit and withdraw money from the account.

#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accNum = 0, double bal = 0.0) {
        accountNumber = accNum;
        balance = bal;
    }

    // Getter functions
    int getAccountNumber() const {
        return accountNumber;
    }

    double getBalance() const {
        return balance;
    }

    // Setter functions
    void setAccountNumber(int accNum) {
        accountNumber = accNum;
    }

    void setBalance(double bal) {
        if (bal >= 0) {
            balance = bal;
        } else {
            cout << "Invalid balance. Balance cannot be negative." << endl;
        }
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount. Amount must be positive." << endl;
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: $" << balance << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds." << endl;
        } else {
            cout << "Invalid withdrawal amount. Amount must be positive." << endl;
        }
    }

    // Display account information
    void displayInfo() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Create BankAccount object
    BankAccount account(12345, 1000.0);

    // Display initial account information
    account.displayInfo();

    // Deposit money
    account.deposit(500.0);

    // Withdraw money
    account.withdraw(200.0);

    // Display updated account information
    cout << "\nUpdated Information:" << endl;
    account.displayInfo();

    return 0;
}
