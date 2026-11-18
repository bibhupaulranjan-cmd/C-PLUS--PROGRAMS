#include<iostream>
using namespace std;

class Product {
    int id;
    string name;
    float price;

public:
    Product(int id=0,string name="None",float price=0) {
        this->id=id;
        this->name=name;
        this->price=price;
    }

    Product operator+(Product p) {
        return Product(0,"Combined",price+p.price);
    }

    void display() {
        cout<<name<<" Price: "<<price<<endl;
    }
};

Product add(Product a,Product b) {
    return a+b;
}

int main() {
    Product p1(1,"Pen",20);
    Product p2(2,"Book",100);

    Product p3=add(p1,p2);

    p1.display();
    p2.display();
    p3.display();
}
