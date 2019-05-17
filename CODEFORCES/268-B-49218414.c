/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:30/01/2019
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007

int main()
{
    long long n,ans=0;
    scanf("%lld",&n);
    for(int i=1;i<n;i++)
    {
        ans+=(n-i)*i;
    }
    ans+=n;
    printf("%lld",ans);
    return 0;
}