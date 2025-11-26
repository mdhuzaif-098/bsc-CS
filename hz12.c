//Write a program of C program to swap two integer numbers without using temporary Variable 
 
#include <stdio.h> 
 
int main() { 
    int a, b; 
 
    printf("Enter first number: "); 
    scanf("%d", &a); 
 
    printf("Enter second number: "); 
    scanf("%d", &b); 
 
    a = a + b; 
    b = a - b; 
    a = a - b; 
 
    printf("After swapping:\n"); 
    printf("first number = %d\n", a); 
    printf("second number = %d\n", b); 
 
    return 0; 
} 
 
