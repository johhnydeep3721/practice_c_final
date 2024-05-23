int gcd(int a, int b, int c, int d){
    if(a>b && a>c && a>d){
        int max=0;
        for (int i = 1; i <= a; i++)
        {
            if(a%i==0 && b%i==0 && c%i==0 && d%i==0){
                max = i;
            }      
        }
        return max;
    }
    else if(b>a && b>c && b>d){
        int max=0;
        for (int i = 1; i <= b; i++)
        {
            if(a%i==0 && b%i==0 && c%i==0 && d%i==0){
                max = i;
            }
        }
            return max;
        
    }
    else if(c>a && c>b && c>d){
        int max=0;
        for (int i = 1; i <= c; i++)
        {
            if(a%i==0 && b%i==0 && c%i==0 && d%i==0){
                max = i;
            }
        }
            return max;
        
    }
    else if(d>a && d>c && d>b){
        int max=0;
        for (int i = 1; i <= d; i++)
        {
            if(a%i==0 && b%i==0 && c%i==0 && d%i==0){
                max = i;
            }
        }
            return max;
        
    }
}