#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int roll;
    int marks;

public:
    void getData()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter marks: ";
        cin >> marks;
    }
};

class Result : public Student
{
public:
    void display()
    {
        cout << "\nStudent Result" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Result r;

    r.getData();
    r.display();

    return 0;
}
