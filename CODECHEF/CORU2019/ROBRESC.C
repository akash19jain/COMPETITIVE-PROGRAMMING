https://www.codechef.com/CORU2019/problems/ROBRESC/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:16/03/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007
int cmp(const void * a,const void * b)
{
    return (*(int*)b - *(int*)a);
}

int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,p,q,l,r,x,j;
        scanf("%lld%lld%lld",&n,&p,&q);
        long long arr[n],sum=0,i,coins[q],max=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            sum+=arr[i];
        }
        for(i=0;i<q;i++)
        {
            scanf("%lld%lld%lld",&l,&r,&x);
            long long z=(r-l+1)*x;
            coins[i]=z;
            //printf("%lld ",coins[i]);
        }
        qsort(coins,q,sizeof(coins[0]),cmp);
        for(i=0;i<p;i++)
        {
            sum+=coins[i];
        }
        printf("%lld\n",sum);
    }
    return 0;
}
