#include <stdio.h>
#include <stdlib.h>
void selection_sort(int n){
    int *arr =(int* )malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("input number %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("before selection sort:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }
    
    for (int i = 0;i<n - 1; i++)
    {
        int min = i;
        for (int j = i+1;j < n; j++)
        {
            if (arr[j]>arr[min])
            {
                min = j;
            }
            
        }
        if(min != i){
            int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
        }
        
    }
    
    printf("\nafter selection sorted:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }
    

}
