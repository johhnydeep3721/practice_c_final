#include <stdio.h>
#include <stdlib.h>

void dynamic_arr(int n){
    int *arr=(int* )malloc(n*sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        printf("input number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("serries of number:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }

    int sum_even = 0;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]%2==0){
        sum_even += arr[i];
       }
    }
    printf("\n sum_even is %d",sum_even);

    int sum_odd = 0;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]%2!=0){
        sum_odd += arr[i];
       }
    }
    printf("\n sum_odd is %d",sum_odd);
    
    
}