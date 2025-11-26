// Write a program of C to evaluate factorial of given no
#include <stdio.h>

int main(){
    int n,f=1,a=1;

    printf("enter number");
    scanf("%d",&n);

    do{
        f=f*a;
        a++;
    }
    while(a<=n);
    printf("%d ",f);

    return 0;


}