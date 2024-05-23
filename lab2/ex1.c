#include <stdio.h>
#include "convert.h"

// float fahr(float c){
//     float F;
//     F = (5/9)*c + 32;
//     return F;
// }

int main(){
    int C;
    printf("input C: ");
    scanf("%d",C);
    printf("temperature form Centigrade to Fahrenheigh is %.2f",fahr(C));
}