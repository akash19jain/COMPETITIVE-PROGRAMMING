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
        long long x,ans;
        scanf("%lld",&x);
        ans=x/2;
        printf("%d\n",ans);
    }
    return 0;
}