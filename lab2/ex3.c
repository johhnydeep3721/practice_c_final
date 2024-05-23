#include <stdio.h>

int main(){
    int a,b;
    printf("input a: ");
    scanf("%d",&a);
    printf("input b: ");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("new a: %d\n",a);
    printf("new b: %d",b);

}
