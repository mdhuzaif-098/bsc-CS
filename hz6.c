//Write a program of C to convert the given paisa in to rupees. 
 #include <stdio.h>

 int main()
{
float a,b;

  printf("Enter  value::");
  scanf("%f",&a);
  b=a/100;
  printf("%.0f paisa = %.2f rupees\n",a,b);

  return 0;

}