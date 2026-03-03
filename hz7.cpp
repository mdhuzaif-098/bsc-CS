// Write a program of C++ program to find area of a rectangle

#include <iostream>
using namespace std;    

int main () {
    int l, b, area;

    cout << "enter length and breadth of rectangle: ";
    cin >> l >> b;

    area = l * b;

    cout << "area of rectangle is " << area << endl;

    return 0;
}