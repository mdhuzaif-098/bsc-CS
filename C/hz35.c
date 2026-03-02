//Write a C program to print all prime numbers from 1 to N.

#include <stdio.h>

int main() {
    int N, i, j, a;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Prime numbers from 1 to %d are:\n", N);

    for(i = 2; i <= N; i++) {
        a = 1; 

        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                a = 0; 
                break;
            }
        }

        if(a) { 
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}