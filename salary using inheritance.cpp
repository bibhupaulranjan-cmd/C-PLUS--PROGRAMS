#include <iostream>
#include <string>
using namespace std;

class Salary
{
private:
    int salary;

public:
    void setSalary(int n)
    {
        if (n >= 0)
            salary = n;
        else
            salary = 0;
    }

    int getSalary()
    {
        return salary;
    }
};

class FullTime : public Salary
{
public:
    void calculateSalary()
    {
        int basic;
        cout << "Enter monthly salary: ";
        cin >> basic;
        setSalary(basic);
    }
};

class PartTime : public Salary
{
public:
    void calculateSalary()
    {
        int hours;
        cout << "Enter working hours: ";
        cin >> hours;
        setSalary(hours * 200);
    }
};

int main()
{
    string type;

    cout << "Enter employee type (fulltime/parttime): ";
    cin >> type;

    if (type == "fulltime")
    {
        FullTime emp;
        emp.calculateSalary();
        cout << "Salary = " << emp.getSalary() << endl;
    }
    else if (type == "parttime")
    {
        PartTime emp;
        emp.calculateSalary();
        cout << "Salary = " << emp.getSalary() << endl;
    }
    else
    {
        cout << "Invalid employee type." << endl;
    }

    return 0;
}
