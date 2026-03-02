// Write a program of C to print all even no. from 2 to 100.

#include <stdio.h>

int main() {
    int num = 2;  
         
    while (num <= 100) {  
        printf("%d ", num);  
        num += 2; 
    }
    
    printf("\n");  
    return 0;
}
