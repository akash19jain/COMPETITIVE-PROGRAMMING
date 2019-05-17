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
        long long n,ans=0,a;
        scanf("%lld",&n);
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&a);
            ans=ans|a;
        }
        printf("%lld\n",ans);
    }
    return 0;
}