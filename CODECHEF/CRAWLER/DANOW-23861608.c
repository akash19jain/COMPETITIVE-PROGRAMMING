/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:08/04/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
        long long n,q;
        scanf("%lld%lld",&n,&q);
        long long a[n],b[n];
        for(long long i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(long long i=0;i<n;i++)
            scanf("%lld",&b[i]);
        for(long long i=0;i<q;i++)
        {
            long long l,r,ans=0;
            
            scanf("%lld%lld",&l,&r);
            l--;r--;
            for(long long j=l;j<=r;j++)
                ans+=a[j]*b[j];
            
            printf("%lld\n",ans);
        }
    }
    return 0;
}