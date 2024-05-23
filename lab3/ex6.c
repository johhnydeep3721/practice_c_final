#include <stdio.h>

int main(){
    int number;
    printf("input number: ");
    scanf("%d",&number);

    int fact = 1;
    if(number == 0){
        printf("factorial of %d is %d",number,fact);
    }
    else
    {
        for (int i = number; i > 0; i--){
                fact *= i;
        }
            printf("factorial of number %d is %d",number,fact);
        }
    
}