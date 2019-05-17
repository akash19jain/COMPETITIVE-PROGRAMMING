#include<stdio.h>

int gcd(int a,int b)
{
    if(b==0)
    return a;
        
    return gcd(b,a%b);
        
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j,gc=0;
        scanf("%d",&n);
        
        for(i=0;i<n;i++)
        {
            scanf("%d",&j);
            gc=gcd(gc,j);
        }
        
        if(gc==1)
        printf("YES\n");
        else
        printf("NO\n");
    
    }
    
   
    return 0;
}