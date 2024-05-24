#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    printf("input string: ");
    fgets(str,sizeof(str),stdin);
    printf("string is %s",str);

    int L = strlen(str)-1;
    int count = 0;
    printf("position a at");
    for (int i = 0; i < L; i++)
    {   
        if(str[i]=='a'){
            printf(" %d",i+1);
            count++;
        }
    }
    if(count==0){
        printf("\nstring don't have a");
    }
    else{
        printf("\nstring have %d a",count);
    }
}