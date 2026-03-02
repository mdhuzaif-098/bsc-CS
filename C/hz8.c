//Write a program of C program to find area and perimeter of circle 
 
#include <stdio.h> 
#define PI 3.14 
 
int main() { 
    float radius, area, perimeter; 
 
    printf("Enter the radius of the circle: "); 
    scanf("%f", &radius); 
 
    area = PI * radius * radius; 
    perimeter = 2 * PI * radius; 
 
    printf("Area of the circle = %.2f\n", area); 
    printf("Perimeter of the circle = %.2f\n", perimeter); 
 
    return 0; 
}