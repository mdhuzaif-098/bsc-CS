/* Write a program  to input any 3 digit integer number and the n check it is 
palindrome number or not (palindrome number : if the number and its reverse value are equal)*/

#include <iostream>
using namespace std;    

int main(){
    int num, a, b, c, d;
    cout << "enter a three digit number: ";
    cin >> num;

    a = num / 100;         
    b = (num / 10) % 10;  
    c = num % 10;            
    d = c * 100 + b * 10 + a;

    if (num == d) {
        cout << num << " is a Palindrome number." << endl;
    } else {
        cout << num << " is NOT a Palindrome number." << endl;
    }
}