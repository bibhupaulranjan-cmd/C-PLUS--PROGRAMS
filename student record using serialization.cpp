#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class student
{
public:
    string name;
    int roll;
    string branch;

    friend ofstream& operator<<(ofstream &ofs, student &s);
};

ofstream& operator<<(ofstream &ofs, student &s)
{
    ofs << s.name << endl;
    ofs << s.roll << endl;
    ofs << s.branch << endl;
    return ofs;
}

int main()
{
    student s1, s2, s3, s4;

    s1.name = "John";
    s1.roll = 1;
    s1.branch = "CS";

    s2.name = "Rohan";
    s2.roll = 2;
    s2.branch = "CS";

    s3.name = "Bibhu";
    s3.roll = 3;
    s3.branch = "CS";

    s4.name = "Rob";
    s4.roll = 4;
    s4.branch = "CS";

    ofstream ofs("student.txt", ios::trunc);

    if (!ofs)
    {
        cout << "File cannot be opened!";
        return 1;
    }

    ofs << s1;
    ofs << s2;
    ofs << s3;
    ofs << s4;

    ofs.close();

    cout << "Student records written successfully.";

    return 0;
}
