#include <stdio.h>

void swap(int *num1,int *num2){
    int temp = *num1;
        *num1 = *num2;
        *num2 = temp;
}

int main(){
    int num1,num2;
    printf("input number1: ");
    scanf("%d",&num1);
    printf("input number2: ");
    scanf("%d",&num2);
    printf("before swap: ");
    printf("\nnumber1 = %d",num1);
    printf("\nnumber2 = %d",num2);
    swap(&num1,&num2);

    printf("\nafter swap");
    printf("\nnumber1 = %d",num1);
    printf("\nnumber2 = %d",num2);


}
