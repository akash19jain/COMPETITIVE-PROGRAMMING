/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:17/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t=1;
    scanf("%lld\n",&t);
    while(t--)
    {
        long long s,a,b,c,ans=0;
        scanf("%lld%lld%lld%lld",&s,&a,&b,&c);
        long long sc=a*c;
        long long sc1=s/sc;
        ans=(a+b)*sc1;
        sc1=s%sc;
        sc1=sc1/c;
        ans+=sc1;
        printf("%lld\n",ans);
    }
    return 0;
}