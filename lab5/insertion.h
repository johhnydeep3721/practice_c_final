#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int n){
    int *arr=(int* )malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("input element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("before insertion sort:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
       int key = arr[i];
       int j = i -1;
       while (j >= 0 && arr[j]>key)
       {
        arr[j+1]=arr[j];
        j = j - 1;
       }
       arr[j+1]=key;
    }
    printf("\n after insertion softed:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }
}