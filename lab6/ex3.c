#include <stdio.h>

int main(){
    int A[]={1,2,3,4,5};
    int *p = A;

    int n;
    printf("input number: ");
    scanf("%d",&n);

    printf("the element %d step forward is %d",n,p[n]);
}