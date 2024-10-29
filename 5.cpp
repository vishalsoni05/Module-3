//5. Define a class to represent a bank account. Include the following members:
//. Data Member:
//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account
//Member Functions
//-To assign values
//-To deposited an amount
//-To withdraw an amount after checking balance
//-To display name and balance


#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string name;
    string accountNumber;
    string accountType;
    double balance;

public:
    // Constructor
    BankAccount(string n = "", string accNum = "", string accType = "", double bal = 0.0) {
        name = n;
        accountNumber = accNum;
        accountType = accType;
        balance = bal;
    }

    // Member function to assign values
    void assignValues(string n, string accNum, string accType, double bal) {
        name = n;
        accountNumber = accNum;
        accountType = accType;
        balance = bal;
    }

    // Member function to deposit an amount
    double deposit(double amount) {
        balance += amount;
        return balance;
    }

    // Member function to withdraw an amount after checking balance
    bool withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance." << endl;
            return false;
        }
        balance -= amount;
        return true;
    }

    // Member function to display name and balance
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount account("", "123456789", "Savings", 1000.0);

    // Display initial account details
    cout << "Initial Account Details:" << endl;
    account.displayDetails();

    // Deposit 500
    double newBalance = account.deposit(500.0);
    cout << "\nAfter Deposit:" << endl;
    cout << "Balance: " << newBalance << endl;

    // Withdraw 200
    bool withdrawalStatus = account.withdraw(200.0);
    if (withdrawalStatus) {
        cout << "\nAfter Withdrawal:" << endl;
        account.displayDetails();
    }

    // Attempt to withdraw more than the balance
    account.withdraw(2000.0);

    return 0;
}
