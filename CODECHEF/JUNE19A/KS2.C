https://www.codechef.com/JUNE19A/problems/KS2/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:07/06/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#define MOD 1000000007
long long digitsum(long long n)
{
    long long sum=0;
    while(n>0)
    {
        int r=n%10;
        sum+=r;
        n=n/10;
    }
    return -sum%10;
}

int main()
{
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long c=n;
        long long x=digitsum(n);
       // printf("%lld\n",sum);
         if(x<0)
            x=x+10;
        //printf("%lld\n",x);
        unsigned long long ans=(10*c)+x;
        /*for(int i=1;i<=n;i++)
        {
            printf("%lld ",ans[i]);
        }
        printf("\n");
        for(int i=1;i<=n;i++)
        {
            //if((ans[i]-ans[i-1])!=9)
            printf("%d=%lld ",i,(ans[i]-ans[i-1]));
        }*/
        printf("%llu\n",ans);
    }
    return 0;
}
