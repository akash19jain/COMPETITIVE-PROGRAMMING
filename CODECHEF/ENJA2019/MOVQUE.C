https://www.codechef.com/ENJA2019/problems/MOVQUE/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:28/01/2019
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007

int main()
{
    long long t;
    scanf("%lld\n",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long x=log2(n);
        long long ans=pow(2,x);
        printf("%lld\n",ans);
    }
    return 0;
}
