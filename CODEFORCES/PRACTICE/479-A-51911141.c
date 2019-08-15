/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:27/03/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
long long max(long long x,long long y)
{
    if(x>y)
        return x;
    return y;
}
int main()
{
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
        long long a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        long long ans=a+b+c;
        ans=max(ans,(a+b)*c);
        ans=max(ans,a*(b+c));
        ans=max(ans,a*b*c);
        printf("%lld\n",ans);
    }
    return 0;
}