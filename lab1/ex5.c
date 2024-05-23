#include <stdio.h>
#include <math.h>

float polynomial(float x){
const float a = 1;
const float b = 2;
const float c = 1;
float y = a*x*x + b*x + c;
return y;
}
int main(){
float x;
scanf("%f",&x);
printf("value of a polynomial %f", polynomial(x));

}