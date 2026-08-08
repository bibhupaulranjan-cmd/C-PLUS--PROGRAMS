#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, m, r;

    cout << "Enter the number: ";
    cin >> n;

    m = n;

    while (n > 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    if (m == rev) {
        cout << "The number is palindrome!";
    } else {
        cout << "It is not a palindrome!";
    }

    return 0;
}
