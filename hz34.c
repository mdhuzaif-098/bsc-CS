//Write a program of C to calculate sum of digit of input no.

#include <stdio.h>

int main() {
    int n, a = 0, b;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        b = n % 10;   
        a = a + b;  
        n = n / 10;      
    } while (n != 0);

    printf("Sum of digits = %d", a);

    return 0;
}