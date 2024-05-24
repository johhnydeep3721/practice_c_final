#include <stdio.h>

int normal(int x, int n){
    float result = 1.0;
    for (int i = 1; i <= n; i++)
    {
        result *=x;   
    }
    return result;

    if(n<0){
        result = 1/(float)x;
        return result;
    }
    
}


int recusive(int x, int n){
    if(n == 0){
        return 1;
    }
    else if (n==1)
    {
        return x;
    }
    else if (n>1)
    {
        return x*recusive(x,n-1);
    }
    else
    {
        return 1/(float)x*recusive(x,n-1);
    }
    
}
int main(){
    int n,x;
    printf("input x: ");
    scanf("%d",&x);
    printf("input n: ");
    scanf("%d",&n);

    printf("%d power of %d is %d\n",x,n,normal(x,n));
    printf("%d power of %d is %d",x,n,recusive(x,n));


    
}