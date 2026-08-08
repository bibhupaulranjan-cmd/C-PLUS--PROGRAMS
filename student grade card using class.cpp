 #include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int roll_no;
    string name;
    int marks1, marks2, marks3;

public:
    void setrollno(int r1)
    {
        roll_no = r1;
    }

    void setname(string n)
    {
        name = n;
    }

    void setmarks(int a, int b, int c)
    {
        marks1 = a;
        marks2 = b;
        marks3 = c;
    }

    int getrollno()
    {
        return roll_no;
    }

    string getname()
    {
        return name;
    }

    int totalmarks()
    {
        return marks1 + marks2 + marks3;
    }

    char grade()
    {
        int total = totalmarks();

        if (total >= 250)
            return 'A';
        else if (total >= 200)
            return 'B';
        else
            return 'C';
    }
};

int main()
{
    int r, g1, g2, g3;
    string NAME;

    Student n;

    cout << "Enter the name of the student: ";
    getline(cin,NAME);

    cout << "Enter the roll number: ";
    cin >> r;

    cout << "Enter marks in three subjects: ";
    cin >> g1 >> g2 >> g3;

    n.setname(NAME);
    n.setrollno(r);
    n.setmarks(g1, g2, g3);

    cout << "\nStudent Name : " << n.getname() << endl;
    cout << "Roll Number  : " << n.getrollno() << endl;
    cout << "Total Marks  : " << n.totalmarks() << endl;
    cout << "Grade        : " << n.grade() << endl;

    return 0;
}
