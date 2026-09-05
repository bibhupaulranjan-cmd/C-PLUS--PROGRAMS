#include <iostream>
using namespace std;
class ATM {
private:
    double accountBalance;
    string pin;
    bool verifyPin(string enteredPin) {
        return enteredPin == pin;
    }
    bool checkSufficientBalance(double amount) {
        return amount <= accountBalance;
    }
    void deductAmount(double amount) {
        accountBalance -= amount;
    }
    void dispenseCash(double amount) {
        cout << "Please collect your cash: Rs. " << amount << endl;
    }
    void printReceipt(double amount) {
        cout << "Receipt: Withdrawn Rs. " << amount
             << " Remaining Balance: Rs. " << accountBalance << endl;
    }
public:
    ATM(double balance, string userPin) {
        accountBalance = balance;
        pin = userPin;
    }
    void withdrawMoney(string enteredPin, double amount) {
        cout << "\n  ATM Transaction " << endl;
        if (!verifyPin(enteredPin)) {
            cout << "Incorrect PIN. Transaction failed." << endl;
            return;
        }
        if (!checkSufficientBalance(amount)) {
            cout << "Insufficient balance. Transaction failed." << endl;
            return;
        }
        deductAmount(amount);
        dispenseCash(amount);
        printReceipt(amount);
        cout << "Transaction successful!" << endl;
    }
    void checkBalance(string enteredPin) {
        if (verifyPin(enteredPin))
            cout << "Available Balance: Rs. " << accountBalance << endl;
        else
            cout << "Incorrect PIN." << endl;
    }
};
int main() {
    ATM myAtm(5000.0, "1234");
    myAtm.checkBalance("1234");
    myAtm.withdrawMoney("1234", 1500);
    myAtm.withdrawMoney("0000", 500);
    myAtm.withdrawMoney("1234", 10000); 
    return 0;
}
