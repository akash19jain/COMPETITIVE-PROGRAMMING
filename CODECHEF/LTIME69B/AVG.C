https://www.codechef.com/LTIME69B/problems/AVG/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:23/02/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,v,k,t;
        scanf("%lld%lld%lld",&n,&v,&k);
        long long arr[n],sum=0;
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            sum+=arr[i];
        }
        t=n+v;
        t=t*k;
        t=t-sum;
        if(t>0 && t%v==0)
        t=t/v;
        else
        t=-1;
        printf("%lld\n",t);
    }
}
