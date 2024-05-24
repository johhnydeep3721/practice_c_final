#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char str[1000];
    printf("Enter string: ");
    gets(str);
    printf("before reverse string is %s",str);
    printf("\nafter reverse string is %s",strrev(str));
}