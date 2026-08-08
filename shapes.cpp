#include <iostream>
#include <string>
using namespace std;

class shapes
{
private:
    int length, breadth, radius;

public:
    void setlength(int l)
    {
        length = l;
    }

    void setbreadth(int b)
    {
        breadth = b;
    }

    void setradius(int r)
    {
        radius = r;
    }

protected:
    int getlength()
    {
        return length;
    }

    int getbreadth()
    {
        return breadth;
    }

    int getradius()
    {
        return radius;
    }
};

class rectangle : public shapes
{
public:
    int area()
    {
        return getlength() * getbreadth();
    }
};

class circle : public shapes
{
public:
    float area()
    {
        return 3.14 * getradius() * getradius();
    }
};

int main()
{
    string a;

    cout << "You want to find the area of rectangle or circle: ";
    cin >> a;

    if (a == "rectangle")
    {
        rectangle r;
        int l, b;

        cout << "Enter length and breadth: ";
        cin >> l >> b;

        r.setlength(l);
        r.setbreadth(b);

        cout << "Area of rectangle = " << r.area();
    }
    else if (a == "circle")
    {
        circle c;
        int r;

        cout << "Enter radius: ";
        cin >> r;

        c.setradius(r);

        cout << "Area of circle = " << c.area();
    }
    else
    {
        cout << "Invalid choice";
    }

    return 0;
}
