https://www.codechef.com/ICMT2019/problems/ICM01/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:08/03/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,k,i;
        scanf("%lld%lld",&n,&k);
        long long ans=k*(k+1)/2;
        ans+=(n-k);
        printf("%lld\n",ans);
    }
    return 0;
}
