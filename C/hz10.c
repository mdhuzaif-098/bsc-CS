//Write a program of C program to convert feet to inches 
 
#include <stdio.h> 
 
int main() { 
    float feet, inches; 
 
    printf("Enter length in feet: "); 
    scanf("%f", &feet); 
 
    inches = feet * 12; 
 
    printf("%.2f feet = %.2f inches\n", feet, inches); 
 
    return 0; 
} 