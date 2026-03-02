/* Write a program to input any 3 digit integer number and then check it is Armstrong number or not
(Armstrong number: summation of cube of 3 digit is equal to value of original number)*/


#include <stdio.h>

int main() {
	int num, a, b, c, sum;

	printf("Enter a 3-digit number: ");
	scanf("%d", &num);

	if (num < 100 || num > 999) {
		printf("Invalid number, please enter a 3-digit number.\n");
	} else {
		a = num / 100;         
		b = (num / 10) % 10;  
		c = num % 10;          

		sum = a*a*a + b*b*b + c*c*c;

		if (num == sum) {
			printf("%d is an Armstrong number.\n", num);
		} else {
			printf("%d is NOT an Armstrong number.\n", num);
		}
	}

	return 0;
}