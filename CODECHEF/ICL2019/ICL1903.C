https://www.codechef.com/ICL2019/problems/ICL1903/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:28/03/2019 
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
       long long n,m,k,ans=0;
       scanf("%lld%lld%lld",&n,&m,&k);
       while(n>0)
       {
           if(n%m==0)
                break;
            n=n-k;
            ans++;
       }
       if(n<=0)
        ans=-1;
       printf("%lld\n",ans);
    }
    return 0;
}
