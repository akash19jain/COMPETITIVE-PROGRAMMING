https://www.codechef.com/DEC18A/problems/MAXEP/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    long long n,c;
    scanf("%lld%lld",&n,&c);
    if(n==0)
    {
    }
    else
    {
        long long x1=600,l=1,r=n,coins=1000,flag=0,i;
        
        for(i=x1;i<=n;i+=x1)
        {
            
            printf("1 %lld\n",i);
            fflush(stdout);
            
            int x;
            scanf("%d",&x);
            
            if(x==0)
            {
                l=i+1;
                r=i+x1;
            }
            
            if(x==1)
            {
                l=i-x1+1;
            	r=i;
                printf("2\n");
                fflush(stdout);
                break;
            }
        }
           
        for(long long j=l;j<=r;j++)
        {
            printf("1 %lld\n",j);
            fflush(stdout);
            int x;
            scanf("%d",&x);
            
            if(x==1)
            {
                printf("3 %lld\n",j);
                fflush(stdout);
                break;
            }
        }
    }
}
