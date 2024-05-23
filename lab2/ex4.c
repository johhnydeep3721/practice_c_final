#include <stdio.h>

int main(){
    float a,b,c,d,e,f;
    printf("input a: ");
    scanf("%f",&a);
    printf("input b: ");
    scanf("%f",&b);
    printf("input c: ");
    scanf("%f",&c);
    printf("input d: ");
    scanf("%f",&d);
    printf("input e: ");
    scanf("%f",&e);
    printf("input f: ");
    scanf("%f",&f);

    printf("%.2fx+%.2fy=%.2f\n",a,b,c);
    printf("%.2fx+%.2fy=%.2f\n",d,e,f);

    float det  =a*e - d*b;
    float detA =c*e - f*b;
    float detB =a*f - d*c;

    float x = detA/det;
    float y = detB/det;

    printf("x is %.2f\n",x);
    printf("y is %.2f",y);

}