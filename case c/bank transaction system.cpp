#include<iostream>
using namespace std;

class Account {
protected:
    int acc;
    float balance;

public:
    void input() {
        cin>>acc>>balance;
    }

    virtual void calculateInterest()=0;
};

class SavingsAccount:public Account {
public:
    void calculateInterest() {
        cout<<"Savings Interest: "<<balance*0.05<<endl;
    }
};

class CurrentAccount:public Account {
public:
    void calculateInterest() {
        cout<<"Current Interest: "<<balance*0.02<<endl;
    }
};

int main() {
    SavingsAccount s;
    CurrentAccount c;
    Account *p;

    cout<<"Enter account number and balance: ";
    s.input();
    p=&s;
    p->calculateInterest();

    cout<<"Enter account number and balance: ";
    c.input();
    p=&c;
    p->calculateInterest();
}
