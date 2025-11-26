// Write a program of C to input a, b, c and print largest from them.

#include <stdio.h>

int main(){
    int a,b,c;

    printf("enter number for A,B,C Simultaneously :");
    scanf("%d %d %d",&a,&b,&c);


    if(a>b && a>c){
        printf("A (%d) is biggest number",a);

    } else if(b>a && b>a){
        printf("B (%d) is biggest number",b);

    } else {
        printf("C (%d) is biggset number",c);
    }
    return 0;
    }
