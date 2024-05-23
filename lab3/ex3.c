#include <stdio.h>

int main(){
    int n;
    printf("input n: ");
    scanf("%d",&n);
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + 1/(float)i;
    }
    printf("%f",sum);
    
}