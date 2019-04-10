https://www.codechef.com/LTIME70B/problems/TSTROBOT/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:30/03/2019 
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
       long long n,x;
       scanf("%lld%lld",&n,&x);
       char str[n+5];
       long long max=x,min=x,cur=x,ans=1;
       scanf("%s", str);
       for(long long i=0;i<n;i++)
       {
           if(str[i]=='R')
                cur++;
            else
                cur--;
            if(cur>max)
            {
                ans++;
                max=cur;
            }
            if(cur<min)
            {
                ans++;
                min=cur;
            }
       }
       printf("%lld\n",ans);
    }
    return 0;
}
