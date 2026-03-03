// Write a program of C++ program to find quotient and remainder

#include <iostream>
using namespace std;

int main () {
    int a, b, q, r;

    cout << "enter dividend and divisor: ";
    cin >> a >> b;

    q = a / b;
    r = a % b;

    cout << "quotient = " << q << endl;
    cout << "remainder = " << r << endl;
    return 0;
}