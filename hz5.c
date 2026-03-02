//Write a program of C to convert the given rupees in to paisa. 
 #include <stdio.h>

 int main()
{
int a,b;

  printf("Enter rupees value::");
  scanf("%d",&a);
  b=a*100;
  printf("%d rupees = %d paisa\n",a,b);

  return 0;

}