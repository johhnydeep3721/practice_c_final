#include <stdio.h>

int gcd(int a, int b, int c, int d){
   int min = a;
   if(b<min)min=b;
   if(c<min)min=c;
   if(d<min)min=d;
   int max_gcd = 1;
   for (int i = 1; i <= min; i++)
   {
    if(a%i==0 && b%i==0 && c%i==0 && d%i==0){
        max_gcd = i;
    }
   }
   return max_gcd;
   
}
int main(){
    int a,b,c,d;
    printf("input number 1: ");
    scanf("%d",&a);
    printf("input number 2: ");
    scanf("%d",&b);
    printf("input number 3: ");
    scanf("%d",&c);
    printf("input number 4: ");
    scanf("%d",&d);

    printf("the greatest common divisor of four positive integer numbers is %d",gcd(a,b,c,d));
}
