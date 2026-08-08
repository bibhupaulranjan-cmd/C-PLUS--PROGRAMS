#include <iostream>
using namespace std;

class rational
{
private:
    int p;
    int q;

public:
    void setp(int a)
    {
        p = a;
    }

    void setq(int b)
    {
        q = b;
    }

    int getp()
    {
        return p;
    }

    int getq()
    {
        return q;
    }

    void ratio()
    {
        cout << p << "/" << q;
    }
};

int main()
{
    int c, d;
    rational r;

    cout << "Enter the numerator and denominator: ";
    cin >> c >> d;

    if (d == 0)
    {
        cout << "Denominator cannot be zero!";
        return 0;
    }

    r.setp(c);
    r.setq(d);

    cout << "The rational number is: ";
    r.ratio();

    return 0;
}
