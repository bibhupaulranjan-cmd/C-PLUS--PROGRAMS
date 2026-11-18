#include<iostream>
using namespace std;

class Teacher {
    string name;
    int id;
    float salary;

public:
    Teacher() {
        name="None";
        id=0;
        salary=0;
    }

    Teacher(string n,int i,float s) {
        name=n;
        id=i;
        salary=s;
    }

    void display() {
        cout<<name<<" "<<id<<" "<<salary<<endl;
    }
};

class Department {
    string dname;
    Teacher t[3];

public:
    Department() {
        dname="CSE";

        t[0]=Teacher("Ram",1,30000);
        t[1]=Teacher("Sam",2,40000);
        t[2]=Teacher("Raj",3,50000);
    }

    void display() {
        cout<<"Department: "<<dname<<endl;

        Teacher *p=t;

        for(int i=0;i<3;i++)
            (p+i)->display();
    }
};

int main() {
    Department d;
    d.display();
}
