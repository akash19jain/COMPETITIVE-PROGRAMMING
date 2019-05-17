/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:26/04/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,k;
        scanf("%lld%lld",&n,&k);
        long long a,ans=0;
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&a);
            if(a<k)
                ans+=k-(a%k);
            else if((a%k)<(k-(a%k)))
                ans+=a%k;
            else 
                ans+=k-(a%k);
        }
        printf("%lld\n",ans);
    }
    return 0;
}