#include <iostream>
#include <string>
using namespace std;

// Define a class for BankAccount
class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string num, string holder, double bal) : accountNumber(num), accountHolder(holder), balance(bal) {}

    // Member function to deposit money
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful." << endl;
    }

    // Member function to withdraw money
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }

    // Member function to display account information
    void display() {
        cout << "Account Information:" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Create an object of BankAccount class
    BankAccount acc("123456789", "John Doe", 1000.0);

    // Display initial account information
    acc.display();

    // Perform deposit and display updated account information
    acc.deposit(500.0);
    acc.display();

    // Perform withdrawal and display updated account information
    acc.withdraw(200.0);
    acc.display();

    // Attempt withdrawal with insufficient balance
    acc.withdraw(2000.0);

    return 0;
}
