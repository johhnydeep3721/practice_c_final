#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int n){
    int *arr =(int* )malloc(n*sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        printf("input element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("series numbers:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);

    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;

            }
        
        }
    }

    printf("\nseries of number after bubble sort:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }
    
    free(arr);

}