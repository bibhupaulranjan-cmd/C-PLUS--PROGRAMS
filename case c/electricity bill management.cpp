#include<iostream>
using namespace std;

class ElectricityBill {
    int id,units;
    string name;

public:
    ElectricityBill() {
        id=0;
        units=0;
        name="None";
    }

    ElectricityBill(int i,string n,int u) {
        id=i;
        name=n;
        units=u;
    }

    ElectricityBill operator+(ElectricityBill b) {
        return ElectricityBill(0,"Combined",units+b.units);
    }

    ElectricityBill operator++() {
        ++units;
        return *this;
    }

    void display() {
        cout<<name<<" Units: "<<units<<endl;
    }

    ~ElectricityBill() {
        cout<<"Destructor called\n";
    }
};

int main() {
    ElectricityBill b1(1,"Ram",100);
    ElectricityBill b2(2,"Sam",200);

    ElectricityBill b3=b1+b2;
    b3.display();

    ++b1;
    b1.display();

    ElectricityBill *p=new ElectricityBill(3,"Raj",300);
    p->display();

    delete p;
}
