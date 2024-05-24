#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("size of array: ");
    scanf("%d",&n);

    int *arr=(int* )malloc(n*sizeof(int));

    // if (arr = NULL)
    // {
    //     printf("memory location failed\n");
    //     return 1;
    // }
   
    for (int i = 0; i < n; i++)
    {
        printf("input number %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nseriese numbers");
    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }

    printf("\n");

    free(arr);
    return 0;
}