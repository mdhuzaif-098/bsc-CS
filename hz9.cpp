// Write a program of C++ program to swap two integer numbers.

#include <iostream>
using namespace std;

int main () {
    int a, b, temp;

    cout << "enter value for a: ";
    cin >> a;
    cout << "enter value for b: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}