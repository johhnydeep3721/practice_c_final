#include <stdio.h>

void static_arr(int n){
    long int arr[1000];
    for (int i = 0; i < n; i++)
    {
        printf("input number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
      printf("series of number:");
    for(int i = 0;i < n; i++){
        printf(" %d",arr[i]);
    }
    int sum_even = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            sum_even += arr[i];
        }
        
    }
    printf("\nsum of even is %d",sum_even);

    int sum_odd = 0;
    for(int i = 0;i<n;i++){
        if (arr[i]%2!=0)
        {
            sum_odd += arr[i];
        }
        
    }
    printf("\nsum of odd is %d",sum_odd);

}