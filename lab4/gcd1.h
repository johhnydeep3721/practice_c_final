#include <stdio.h>

void gcd(int num1, int num2){
    if(num1 > num2){
        
        int max=0;
        for (int i = 1; i <= num1; i++)
        {
            if(num1%i==0 && num2%i==0){
                max = i;
            }
        }
        printf("the greatest common divisor is %d",max);
    }
    else if(num2 > num1){
        
        int max=0;
        for (int i = 1; i <= num2; i++)
        {
            if(num1%i==0 && num2%i==0){
                max = i;
            }
        }
        printf("the greatest common divisor is %d",max);
    }
}