#include <stdio.h>
#include <math.h>

float expression(float a,float b,float c){
    float d =3*a - pow(b,3) - 2*sqrt(c);
    return d;

}

int main(){
    int x,y,z;
    printf("input x: ");
    scanf("%d",&x);
    printf("input y: ");
    scanf("%d",&y);
    printf("input z: ");
    scanf("%d",&z);
    printf("the answer is %f", expression(x,y,z));
}