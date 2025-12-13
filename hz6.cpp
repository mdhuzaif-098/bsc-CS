// Write a program of C++ program to find area and perimeter of circle

#include <iostream>
#define pi 3.14
using namespace std;

int main () {
    float r, area, peri;

    cout << "enter radius of circle: ";
    cin >> r;

    area = pi * r * r;
    peri = 2 * pi * r;

    cout << "area = " << area << endl;
    cout << "perimeter = " << peri << endl;

    return 0;
}