#include<iostream>
using namespace std;

class Vehicle {
public:
    virtual void calculateRent()=0;
};

class Car:public Vehicle {
public:
    void calculateRent() {
        int days;
        cout<<"Enter days: ";
        cin>>days;
        cout<<"Car Rent: "<<days*2000<<endl;
    }
};

class Bike:public Vehicle {
public:
    void calculateRent() {
        int days;
        cout<<"Enter days: ";
        cin>>days;
        cout<<"Bike Rent: "<<days*500<<endl;
    }
};

int main() {
    Car c;
    Bike b;
    Vehicle *p;

    p=&c;
    p->calculateRent();

    p=&b;
    p->calculateRent();
}
