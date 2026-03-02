//Write a program of C program to find quotient and remainder 
 
#include <stdio.h> 
 
int main() { 
    int a,b,quotient,remainder; 
 
    printf("Enter any two numbers: "); 
    scanf("%d %d",&a,&b); 
 
    quotient = a / b; 
    remainder = a % b; 
 
    printf("Quotient = %d\n", quotient); 
    printf("Remainder = %d\n", remainder); 
 
    return 0; 
}