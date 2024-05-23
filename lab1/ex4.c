#include <stdio.h>

int main(){
    const int pi = 3.14;
    float radius;
    printf("input radius ");
    scanf("%f",&radius);
    float circum = 2*pi*radius;
    printf("circumference of a circle is %f",circum);
    
}