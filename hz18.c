// Write a program of C to input mark of P,C,M and then check result pass or fail.

#include <stdio.h>
int main() {
    int p, b, c;

    printf("enter a mark for physics: ");
    scanf("%d", &p);

    printf("enter a mark for chemistry: ");
    scanf("%d", &c);

    printf("enter a mark for biology: ");
    scanf("%d", &b);

    if (p >= 35 && c >= 35 && b >= 35) {
        printf("you are pass in all subjects");

    } else if (p < 35 && c < 35 && b < 35) {
        printf("you are fail in all subjects");

    } else if (p < 35) {
        printf("you are fail in physics");

    } else if (c < 35) {
        printf("you are fail in chemistry");
        
    } else if (b < 35) {
        printf("you are fail in biology");
    }

    return 0;
}
  