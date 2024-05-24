#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    printf("input string: ");
    fgets(str,sizeof(str),stdin);
    printf("string: %s",str);

    int L =strlen(str)-1;
    int j = 0;
    for (int i = 0; i < L; i++)
    {
        if (str[i]!='x')
        {
            str[j++]=str[i];
        }
        
    }
    str[j]='\0';
    printf("deleted X in string: %s",str);
    
}