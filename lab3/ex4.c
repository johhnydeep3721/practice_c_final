#include <stdio.h>

int main(){
    int number,temp,digit = 1;
    printf("input number: ");
    scanf("%d",&number);

    temp = number;
    int product = 1;
    while (temp>0)
    {
        digit=temp%10;
        product *= digit;
        temp = temp/10;

    }
    printf("product is %d",product);
    
}