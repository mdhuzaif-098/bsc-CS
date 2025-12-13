// Write a program of C++ to convert the given paisa in to rupees.

#include <iostream>
using namespace std;

int main () {
    int p;
    float r;

    cout << "enter paisa: ";
    cin >> p;

    r = p / 100.0;

    cout << p << " paisa = " << r << " rupees" << endl;
    return 0;
}