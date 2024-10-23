#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private member

public:
    BankAccount() : balance(0.0) {}  // Default constructor

    void deposit(double amount) {
        balance += amount;  // Public member function
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;  // Public member function
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    void displayBalance() {
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account;  // Creating an account
    account.deposit(1000);  // Depositing money
    account.withdraw(500);   // Withdrawing money
    account.displayBalance(); // Displaying balance

    return 0;
}