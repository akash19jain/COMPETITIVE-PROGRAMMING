https://www.codechef.com/ICL2019/problems/ICL1902/

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
       int n,ans=0,c;
       scanf("%d",&n);
       c=0;
       while(n>0)
       {
           int z=sqrt(n);
           n-=(z*z);
           ans++;
       }
       printf("%d\n",ans);
    }
    return 0;
}
