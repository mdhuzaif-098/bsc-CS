// Write a program to check input number is +ve, -ve or absolute 0.

#include<stdio.h>

int main(){
    int a;

    printf("enter any number: ");
    scanf("%d",&a);

    if(a>0){
        printf("%d is a positive number",a);

    } else if(a<0){
        printf("%d is a negative number",a);

    } else if(a==0) {
        printf("%d is equal to zero",a);
    }

    return 0;
}