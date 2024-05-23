#include <stdio.h>
int max(int a, int b, int c){
    int max = a;
    if(b > max || b == max){
        max = b;
    }
    if(c> max || c == max){
        max = c;
    }
    return max;

}
int min(int a, int b, int c){
    int min = a;
    if(b<min  || b == min){
        min = b;
    }
    if(c<min || c == min){
        min = c;
    }
    return min;
}
int main(){
    int a, b, c;
    printf("input number a: ");
    scanf("%d",&a);
    printf("input number b: ");
    scanf("%d",&b);
    printf("input number c: ");
    scanf("%d",&c);

    printf("max number is %d\n",max(a,b,c));
    printf("min number is %d",min(a,b,c));
}