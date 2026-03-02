//  Write a C program to design calculator with basic operations using switch.

#include<stdio.h>

int main(){
    int num1,num2,a,b;

    printf("Enter two Number: ");
    scanf("%d %d",&num1 ,&num2);

    printf(".....Choose one.....\n");
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for division\n");
    printf("press 4 for multiplication\n");
    scanf("%d",&b);

    switch (b){
        case 1:
            printf("Additon is %d\n",a=num1+num2);
            break; 
        case 2:
             printf("Subtraction is %d\n",a=num1-num2); 
            break;
        case 3:
             printf("Multiplication is %d\n",a=num1*num2); 
            break;
        case 4:
             printf("Dividation is %d\n",a=num1/num2); 
            break;
    
        default:
            printf("choose vaild number");
            break;
    }

    return 0;
}