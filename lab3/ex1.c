#include <stdio.h>

int main(){
    int n;
    printf("input number: ");
    scanf("%d",&n);
    printf("divisors is: ");
    
    for(int i = 1;i<=n;i++){
        if(n%i==0){
            printf(" %d", i);
        }
    }
}