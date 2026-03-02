// Write a program to input any 3 digit integer number and the n check it is palindrome number or not (palindrome number : if the number and its reverse value are equal)
 
#include <stdio.h>

int main() {
    int num, a, b, c, d;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) 
    {
        printf("invlid number, pls enter 3 digits number");
        return 0;
    }
    
    
    a = num / 100;         
    b = (num / 10) % 10;  
    c = num % 10;            

    
    d = c * 100 + b * 10 + a;

    if (num == d) {
        printf("%d is a Palindrome number.\n", num);
    } else {
        printf("%d is NOT a Palindrome number.\n", num);
    }

    return 0;
}
