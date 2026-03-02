//Write a program of C to find square & cube of given number. 
#include <stdio.h>

 int main()
{
int a,b;

  printf("Enter a Numbers::");
  scanf("%d",&a);
  b=a*a;
  printf("square of %d is %d\n",a,b);
    b=a*a*a;
  printf("cube of %d is %d\n",a,b);

  return 0;

}