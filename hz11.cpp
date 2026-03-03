// Write a program of C++ to input mark of P,C, M and then check result pass or fail

#include <iostream>
using namespace std;

int main() {
    int P, C, M;

    cout << "Enter marks for Physics: ";
    cin >> P;
    cout << "Enter marks for Chemistry: ";
    cin >> C;
    cout << "Enter marks for Mathematics: ";
    cin >> M;

    if (P >= 33 && C >= 33 && M >= 33) {
        cout << "Result: Pass" << endl;
    } else {
        cout << "Result: Fail" << endl;
    }

    return 0;
}