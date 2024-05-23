#include <stdio.h>
int fibonanci(int x){
    if(x == 0){
        return 1;
    }
    if(x == 1){
        return 1;
    }
    return fibonanci(x - 1) + fibonanci(x-2);
}

int main(){
    int number;
    printf("input number: ");
    scanf("%d",&number);
    for (int i = 0; i <= number; i++)
    {
        printf("%d\t",fibonanci(i));
    }
    
}