#include <stdio.h>

void addNumber(int *num1,int *num2,int *sum){
    *sum = *num1 + *num2;
}

int main(){
    int num1, num2, sum;
    printf("input number1: ");
    scanf("%d",&num1);
    printf("input number2: ");
    scanf("%d",&num2);

    addNumber(&num1,&num2,&sum);
    printf("Sum of number is %d",sum);

    
}