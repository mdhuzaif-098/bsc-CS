// Write a program of C++ program to swap two integer numbers without using temporary variable:

#include <iostream>
using namespace std;

int main () {
    int a, b;

    cout << "enter value for a: ";
    cin >> a;
    cout << "enter value for b: ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
