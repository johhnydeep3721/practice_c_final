#include <stdio.h>
#include "gcd2.h"

int main(){
    int a,b,c,d;
    printf("input number 1: ");
    scanf("%d",&a);
    printf("input number 2: ");
    scanf("%d",&b);
    printf("input number 3: ");
    scanf("%d",&c);
    printf("input number 4: ");
    scanf("%d",&d);

    printf("the greatest common divisor of four positive integer numbers is %d",gcd(a,b,c,d));
}
