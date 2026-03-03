/* Write a program to input any 3 digit integer number and then check it is Armstrong number or not
(Armstrong number: summation of cube of 3 digit is equal to value of original number)*/


#include <iostream>
using namespace std;    

int main(){
    int num, a, b, c, d;
    cout << "enter a three digit number: ";
    cin >> num;

	
		a = num / 100;         
		b = (num / 10) % 10;  
		c = num % 10;          

		d = a*a*a + b*b*b + c*c*c;

		if (num == d) {
			cout << num << " is an Armstrong number." << endl;
		} else {
			cout << num << " is NOT an Armstrong number." << endl;
		}
	}
