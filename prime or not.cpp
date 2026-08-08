#include <iostream>
using namespace std;

int main() {
    int a, i, count = 0;

    cout << "enter the number:-";
    cin >> a;

    for (i = 1; i <= a; i++) {
        if (a % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        cout << "the number is a prime number!";
    } else {
        cout << "it is not!";
    }

    return 0;
}
