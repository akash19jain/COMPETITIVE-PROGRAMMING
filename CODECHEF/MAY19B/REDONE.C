https://www.codechef.com/MAY19B/problems/REDONE/


/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:03/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007
int main()
{
    long long final[1000005];
    long long ans1=1;
    final[1]=ans1;
    for(long long i=2;i<=1000002;i++)
    {
            ans1=ans1*i%mod;
            final[i]=ans1;
            
    }
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
        unsigned long long n,ans=1;
        scanf("%llu",&n);
        n++;
        ans=final[n];
        ans--;
        ans=ans%mod;
        printf("%llu\n",ans);
        
    }
    return 0;
}
