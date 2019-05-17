/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:02/02/2019
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007

int main()
{
    long long a,b,ans=1;
    scanf("%lld%lld",&a,&b);
    if(a>b)
    a=b;
    for(long long i=1;i<=a;i++)
    {
        ans*=i;
    }
    printf("%lld",ans);
    return 0;
}