//Write a program of C program to swap two integer numbers. 
 
#include <stdio.h> 
 
int main() { 
    int a, b, temp; 
 
    printf("Enter first number: "); 
    scanf("%d", &a); 
 
    printf("Enter second number: "); 
    scanf("%d", &b); 
 
    temp = a; 
    a = b; 
    b = temp; 
 
    printf("After swapping:\n"); 
    printf("first number = %d\n", a); 
    printf("second number = %d\n", b); 
 
    return 0; 
} 