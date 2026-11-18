#include<iostream>
using namespace std;

class Question {
protected:
    int id,marks;

public:
    virtual void evaluate()=0;

    friend void compare(Question &,Question &);
};

class MCQ:public Question {
public:
    void evaluate() {
        cout<<"Enter ID and marks: ";
        cin>>id>>marks;
        cout<<"MCQ Marks: "<<marks<<endl;
    }
};

class Descriptive:public Question {
public:
    void evaluate() {
        cout<<"Enter ID and marks: ";
        cin>>id>>marks;
        cout<<"Descriptive Marks: "<<marks<<endl;
    }
};

void compare(Question &a,Question &b) {
    if(a.marks>b.marks)
        cout<<"MCQ has higher marks";
    else
        cout<<"Descriptive has higher marks";
}

int main() {
    MCQ m;
    Descriptive d;
    Question *p;

    p=&m;
    p->evaluate();

    p=&d;
    p->evaluate();

    compare(m,d);
}
