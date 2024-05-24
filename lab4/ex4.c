#include <stdio.h>

int factorial(int n){
    
    if(n>0){
        return n*factorial(n-1);
    }
    else if (n==0)
    {
        return 1;
    }
    
}

int main(){
    int number;
    printf("input number: ");
    scanf("%d",&number);
    printf("factorial is %d",factorial(number));
}