//Write a program of C to input any no. integer value and obtain its reverse.

#include <stdio.h>

int main() {
    int num, a=0, b;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    while(num != 0) {
        b = num % 10;       
        a = a * 10 + b;  
        num = num / 10; 
    }
    
    printf("The reverse number is: %d\n", a);
    
    return 0;
}