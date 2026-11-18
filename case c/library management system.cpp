#include<iostream>
using namespace std;

class Publication {
protected:
    string title;
    int year;

public:
    virtual void displayDetails()=0;

    friend void compare(Publication &,Publication &);
};

class Book:public Publication {
public:
    void input() {
        cin>>title>>year;
    }

    void displayDetails() {
        cout<<"Book: "<<title<<" "<<year<<endl;
    }
};

class Magazine:public Publication {
public:
    void input() {
        cin>>title>>year;
    }

    void displayDetails() {
        cout<<"Magazine: "<<title<<" "<<year<<endl;
    }
};

void compare(Publication &a,Publication &b) {
    if(a.year>b.year)
        cout<<"First is newer";
    else
        cout<<"Second is newer";
}

int main() {
    Book b;
    Magazine m;
    Publication *p;

    cout<<"Enter book title and year: ";
    b.input();

    cout<<"Enter magazine title and year: ";
    m.input();

    p=&b;
    p->displayDetails();

    p=&m;
    p->displayDetails();

    compare(b,m);
}
