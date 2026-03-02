//Write a program of C check the input no. is prime or not.

#include <stdio.h>

int main() {
    int n, a= 2, b= 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        if (n % a == 0) {
            b = 1;
            break;
        }
        a++;
    } while (a <= n / 2);

    if (n <= 1)
        printf("%d is neither prime nor composite.\n", n);
    else if (b == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}