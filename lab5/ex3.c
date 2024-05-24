#include <stdio.h>
#include <stdlib.h>
#include "bubble.h"
#include "insertion.h"
#include "selection.h"

int main(){
    int num;
    printf("input size of arr: ");
    scanf("%d",&num);
    
    // bubble_sort(num);
    // insertion_sort(num);
    selection_sort(num);
}