https://www.codechef.com/DEC18A/problems/INTXOR/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    long long t,flag=0;
    scanf("%lld",&t);
    while(t--)
    {
    	//flag=0;
        long long n,ans;
        scanf("%lld",&n);
        
        if(flag==0)
        {
            long long arr[n+1];
            for(long long i=1;i<n;i++)
            {
                printf("1 %lld %lld %lld\n",i+1,i+1,i);
                fflush(stdout);
                long long x;
                scanf("%lld",&x);
                if(x==-1)
                {
                    flag=1;
                    break;
                }
                arr[i]=x;
            }
            if(flag==0)
            {
                printf("1 1 1 %lld\n",n);
                fflush(stdout);
                long long x;
                scanf("%lld",&x);
                if(x==-1)
                flag=1;
                arr[n]=x;
                
                printf("2 ");
                for(long long i=1;i<=n;i++)
                {
                    printf("%lld ",arr[i]);
                }
                printf("\n");
                fflush(stdout);
            }
        }
        
        if(flag==1)
        {
            
            printf("1 1 2 3\n");
            fflush(stdout);
            
            long long x;
            scanf("%lld",&x);
                       
            printf("1 2 3 4\n");
            fflush(stdout);
            
            long long x1;
            scanf("%lld",&x1);
            
 
            if(x<x1)
            ans=x+1;
            else
            ans=x1;
            
            printf("2 ");
            for(long long i=0;i<n;i++)
            {
                printf("%lld ",ans+i);
            }
            printf("\n");
            fflush(stdout);
        }
            
        int aa;
        scanf("%d",&aa);
    }
    return 0;
}
