// Write a program of C++ to check candidate is eligible for vote or not.

#include <iostream>
using namespace std;

int main(){
    int a;

    cout << "enter your age: ";
    cin >> a;

    if (a >= 18) {
        cout << "you are eligible for vote";
    }
    else {
        cout << "you are not eligible for vote";
    }
}