#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("input size of array: ");
    scanf("%d",&n);


    int *arr = (int* )malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("input number %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\n");
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("sum of all array element is %d",sum);
    
    

}