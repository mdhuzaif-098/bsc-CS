//Write a program of C to take two no.& perform athematic operation 
 
 #include <stdio.h> 
 
 int main() 
{ 
int a,b,c; 
 
  printf("Enter any two Numbers::"); 
  scanf("%d %d",&a,&b); 
   
  c=a+b; 
  printf("Additon of %d & %d is %d\n",a,b,c); 
   
  c=a-b; 
  printf("Subtraction of %d & %d is %d\n",a,b,c); 
   
  c=a*b; 
  printf("Multiplication of %d & %d is %d\n",a,b,c); 
   
  c=a/b; 
  printf("Dividation of %d & %d is %d\n",a,b,c); 
  return 0; 
 
} 