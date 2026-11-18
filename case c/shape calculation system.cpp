#include<iostream>
using namespace std;

class Shape {
public:
    virtual void calculateArea()=0;
};

class Circle:public Shape {
public:
    void calculateArea() {
        float r;
        cin>>r;
        cout<<"Circle Area: "<<3.14*r*r<<endl;
    }
};

class Rectangle:public Shape {
public:
    void calculateArea() {
        float l,b;
        cin>>l>>b;
        cout<<"Rectangle Area: "<<l*b<<endl;
    }
};

class Triangle:public Shape {
public:
    void calculateArea() {
        float b,h;
        cin>>b>>h;
        cout<<"Triangle Area: "<<0.5*b*h<<endl;
    }
};

int main() {
    Shape *p;

    Circle *c=new Circle;
    Rectangle *r=new Rectangle;
    Triangle *t=new Triangle;

    cout<<"Enter radius: ";
    p=c;
    p->calculateArea();

    cout<<"Enter length and breadth: ";
    p=r;
    p->calculateArea();

    cout<<"Enter base and height: ";
    p=t;
    p->calculateArea();

    delete c;
    delete r;
    delete t;
}
