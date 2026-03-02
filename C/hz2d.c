//Write a program of C to take two no.& perform athematic operation
//for Dividation
 #include <stdio.h>

 int main()
{
float a,b,c;

  printf("Enter any two Numbers::");
  scanf("%f %f",&a,&b);
  c=a/b;
  printf("Dividation of %.0f & %.0f is %.2f\n",a,b,c);

  return 0;

}