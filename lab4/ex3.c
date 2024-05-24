#include <stdio.h>
int f(int x){
   int F = 2.5*x;
   return F;
}
int g(int x, int y){
    int G = x*y;
    return G;
}
int main(){
    int x,y;
    printf("input number x: ");
    scanf("%d",&x);
    printf("input number y: ");
    scanf("%d",&y);
    printf("f(x) = %d \n",f(x));
    printf("g(x) = %d",g(x,y));
    

    
}