#include <stdio.h>
#include <stdlib.h>
void dynamic_array(int n){
    int max,min;
    int *arr = (int* )malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("enter element%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("serries of numbers:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }
    max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("max number is: %d",max);

    min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    printf("min number is: %d",min);
}