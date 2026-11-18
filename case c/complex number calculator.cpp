#include<iostream>
using namespace std;

class Complex {
    int real,imag;

public:
    Complex(int r=0,int i=0) {
        real=r;
        imag=i;
    }

    Complex operator+(Complex c) {
        return Complex(real+c.real,imag+c.imag);
    }

    Complex operator-(Complex c) {
        return Complex(real-c.real,imag-c.imag);
    }

    Complex operator-() {
        return Complex(-real,-imag);
    }

    friend Complex multiply(Complex,Complex);

    void display() {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    void setReal(int real) {
        this->real=real;
    }
};

Complex multiply(Complex a,Complex b) {
    return Complex(a.real*b.real-a.imag*b.imag,
                   a.real*b.imag+a.imag*b.real);
}

int main() {
    Complex c1(5,3),c2(2,4);

    Complex c3=c1+c2;
    Complex c4=c1-c2;
    Complex c5=-c1;
    Complex c6=multiply(c1,c2);

    c3.display();
    c4.display();
    c5.display();
    c6.display();
}
