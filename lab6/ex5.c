#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=5;
    int *ptr = &a;
    printf("value pointer %d\n",*ptr);
    int **ptr2 = &ptr;
    printf("value pointer %d",**ptr2);
    int *ptr3[10];
    for (int i = 0; i < 10; i++)
    {
        ptr3[i] =(int* )malloc(sizeof(int));
        if (ptr3[i]!=NULL)
        {
            *ptr3[i] = i;
            printf("array of 10 pointer to int ptr3[%d] = %d\n",i,*ptr3[i]);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        free(ptr3[i]);
    }
    
    
}