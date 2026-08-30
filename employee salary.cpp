#include <iostream>
using namespace std;

class Employee
{
    string name;
    int id;
    float salary;

public:
    void getData()
    {
        cout << "Enter employee name: ";
        cin >> name;

        cout << "Enter employee ID: ";
        cin >> id;

        cout << "Enter salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee Details" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;

    e.getData();
    e.display();

    return 0;
}
