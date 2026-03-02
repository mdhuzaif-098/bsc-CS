//Write a program of C to find the total & percentage of four Subject marks
#include<stdio.h>

int main(){
int sub1,sub2,sub3,sub4;
float per,tot;
printf("Enter the marks of first subject::");
scanf("%d",&sub1);

printf("Enter the marks of second subject::");
scanf("%d",&sub2);

printf("Enter the marks of third subject::");
scanf("%d",&sub3);

printf("Enter the marks of fourth subject::");
scanf("%d",&sub4);

tot=sub1+sub2+sub3+sub4;
printf("the total  marks of four Subject is %.0f \n",tot);

per=tot/4;
printf("the percentage of four Subject marks is %.2f \n",per);

 return 0;
}
