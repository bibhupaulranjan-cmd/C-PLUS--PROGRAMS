#include<iostream>
using namespace std;

class Patient {
    int id,marks[4];
    string name;
    static int count;

public:
    void input() {
        cin>>id>>name;
        for(int i=0;i<4;i++)
            cin>>marks[i];
        count++;
    }

    static void showCount() {
        cout<<"Total Patients: "<<count<<endl;
    }

    friend void compare(Patient,Patient);
};

int Patient::count=0;

void compare(Patient p1,Patient p2) {
    int a=0,b=0;
    for(int i=0;i<4;i++) {
        a+=p1.marks[i];
        b+=p2.marks[i];
    }

    if(a>b)
        cout<<"Patient 1 has higher marks";
    else
        cout<<"Patient 2 has higher marks";
}

Patient getPatient(Patient p) {
    return p;
}

int main() {
    Patient p1,p2;

    cout<<"Enter patient 1 details and 4 results: ";
    p1.input();

    cout<<"Enter patient 2 details and 4 results: ";
    p2.input();

    Patient p3=getPatient(p1);

    Patient::showCount();
    compare(p1,p2);
}
