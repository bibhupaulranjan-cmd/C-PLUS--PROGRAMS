#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void getPersonData()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }
};

class Employee : public Person
{
    int id;
    float salary;

public:
    void getEmployeeData()
    {
        cout << "Enter employee ID: ";
        cin >> id;

        cout << "Enter salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;

    e.getPersonData();
    e.getEmployeeData();
    e.display();

    return 0;
}
