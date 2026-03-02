/*Write a program to input the marks of 4 subjects and calculate percentage and class.

% marks          Class
<35              fail
35 to 49         third class
50 to 59         second class
60 to 74         first class
>75              Distinction */

#include<stdio.h>

int main(){
    int sub1,sub2,sub3,sub4;
    float tot,per;

    printf("enter first subject marks: ");
    scanf("%d",&sub1);

    printf("enter second subject marks: ");
    scanf("%d",&sub2);

    printf("enter third subject marks: ");
    scanf("%d",&sub3);

    printf("enter fourth subject marks: ");
    scanf("%d", &sub4);

    tot=sub1+sub2+sub3+sub4;
    per=tot/4;
    printf("You got %.2f%\n",per);

    if(per<35){
        printf(" fail");

    } else if(per>=35 && per<49){
        printf(" third class");

    } else if(per>=50 && per<59){
        printf(" second class");

    } else if(per>=60 && per<74){
        printf(" first class");

    } else if(per>=75){
        printf(" Distinction");
    }
        

    return 0;
}