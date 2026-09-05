#include <iostream>
using namespace std;
class BankAccount {
private:
    double balance; 
public:
    BankAccount(double initialBalance = 0.0) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0.0;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: Rs. " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: Rs. " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }
    void displayBalance() {
        cout << "Current Balance: Rs. " << balance << endl;
    }
};
int main() {
    BankAccount account(1000.0);

    account.displayBalance();
    account.deposit(500);
    account.displayBalance(); 
    account.withdraw(300);
    account.displayBalance();
    return 0;
}
