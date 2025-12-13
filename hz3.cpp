// Write a program of C++ to find the total & percentage of four Subject marks

#include <iostream>
using namespace std;

int main () {
    int sub1, sub2, sub3, sub4;
    float tot, per;

    cout << "enter marks of four subjects: ";
    cin >> sub1 >> sub2 >> sub3 >> sub4;

    tot = sub1 + sub2 + sub3 + sub4;
    per = tot / 4;

    cout << "total marks = " << tot << endl;
    cout << "percentage = " << per << "%";
    
    return 0;
}