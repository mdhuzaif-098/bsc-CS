// Write a program of C to print Fibonacci's series for 20 terms.

#include<stdio.h>

int main (){
    int i = 2, a = 0, b = 1, c;

    printf("%d\n%d\n",a,b);

    while(i < 20) {
        c = a + b;
        printf("%d + %d = %d\n",a,b,c);
        a = b;
        b = c;
        i++;
    }

    return 0;
}