
            return max;
        }
        
    }
    else if(b>a && b>c && b>d){
        int max=0;
        for (int i = 1; i <= a; i++)
        {
            if(a%i==0 && b%i==0 && c%i==0 && d%i==0){
                max = i;
            }
            return max;
        }
        
    }
    else if(c>a && c>b && c>d){
        int max=0;
        for (int i = 1; i <= a; i++)
        {
            if(a%i==0 && b%i==0 && c%i==0 && d%i==0){
                max = i;
            }
            return max;
        }
        
    }
    else if(d>a && d>c && d>b){
        int max=0;
        for (int i = 1; i <= a; i++)
        {
            if(a%i==0 && b%i==0 && c%i==0 && d%i==0){
                max = i;
            }
            return max;
        }
        
    }
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
