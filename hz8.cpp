// Write a program of C++ program to convert feet to inches

#include <iostream>
using namespace std;    

int main () {
    int f, i;

    cout << "enter feet: ";
    cin >> f;

    i = f * 12;

    cout << f << " feet = " << i << " inches" << endl;

    return 0;
}