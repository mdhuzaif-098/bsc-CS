/* Write a menu driven program for following.
    1-even/odd
    2-+ve/-ve
    3-perfect square / not
    4-divisible by 2 & 7 or not */

#include <stdio.h>
#include <math.h>

int main() {
    int a,num;
    
    printf(".....Choose one.....\n");
    printf("press 1 for Even/Odd\n");
    printf("press 2 for Positive/Negative\n");
    printf("press 3 for Perfect Square\n");
    printf("press 4 for divisible by 2 & 7\n");
    scanf("%d",&a);
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    switch(a) {
        case 1:
            if(num % 2 == 0)
                printf("%d is Even\n", num);
            else
                printf("%d is Odd\n", num);
            break;
            
        case 2:
            if(num > 0)
                printf("%d is Positive\n", num);
            else if(num < 0)
                printf("%d is Negative\n", num);
            else
                printf("Zero is neither positive nor negative\n");
            break;
            
        case 3:
            {
                int root = sqrt(num);
                if(root * root == num)
                    printf("%d is a Perfect Square\n", num);
                else
                    printf("%d is not a Perfect Square\n", num);
            }
            break;
            
        case 4:
            if(num % 2 == 0 && num % 7 == 0)
                printf("%d is divisible by both 2 and 7\n", num);
            else
                printf("%d is not divisible by both 2 and 7\n", num);
            break;
            
        default:
            printf("Invalid choice! Please select between 1 to 4\n");
    }
    
    return 0;
}