#include<iostream>
using namespace std;

class Employee {
    int id;
    string name;
    float salary;

public:
    Employee() {
        id=0;
        name="Unknown";
        salary=0;
    }

    Employee(int i,string n,float s) {
        id=i;
        name=n;
        salary=s;
    }

    Employee(Employee &e) {
        id=e.id;
        name=e.name;
        salary=e.salary;
    }

    Employee operator+(Employee e) {
        Employee t;
        t.salary=salary+e.salary;
        return t;
    }

    void display() {
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }

    ~Employee() {
        cout<<"Object destroyed\n";
    }
};

int main() {
    Employee e1;
    Employee e2(1,"Ram",20000);
    Employee e3(e2);

    Employee *p=new Employee(2,"Sam",30000);

    e2.display();
    e3.display();
    p->display();

    Employee e4=e2+e3;
    cout<<"Combined salary: ";
    e4.display();

    delete p;
}
