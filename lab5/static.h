#include <stdio.h>

void static_array(int n){
    long int a[1000];
    int max, min;
    for (int i = 0; i < n; i++)
        {
         printf("input number%d: ",i+1);
         scanf("%d",&a[i]);
        }
    
    printf("series of number:");
    for(int i = 0;i < n; i++){
        printf(" %d",a[i]);
    }

    max =a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max = a[i];
        }
    }
    printf("\nmax of number is %d",max);

    min=a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
        
    }
    printf("\nmin of number is %d",min);
    
    
}
