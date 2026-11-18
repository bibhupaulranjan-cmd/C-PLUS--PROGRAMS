#include<iostream>
using namespace std;

class Student {
    int roll, marks[5];
    string name;
    static int count;

public:
    void input();
    int total();
    void display();
    static void showCount() {
        cout<<"Total Students: "<<count<<endl;
    }
};

int Student::count=0;

void Student::input() {
    cout<<"Enter roll and name: ";
    cin>>roll>>name;
    cout<<"Enter 5 marks: ";
    for(int i=0;i<5;i++)
        cin>>marks[i];
    count++;
}

int Student::total() {
    int s=0;
    for(int i=0;i<5;i++)
        s+=marks[i];
    return s;
}

void Student::display() {
    cout<<roll<<" "<<name<<" Total: "<<total()<<endl;
}

void highest(Student s[],int n) {
    int max=0,pos=0;
    for(int i=0;i<n;i++)
        if(s[i].total()>max) {
            max=s[i].total();
            pos=i;
        }
    cout<<"Highest marks student:\n";
    s[pos].display();
}

int main() {
    Student s[5];
    for(int i=0;i<5;i++)
        s[i].input();

    Student::showCount();
    highest(s,5);
}
