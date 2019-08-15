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
    //scanf("%lld",&t);
    while(t--)
    {
       int n,h;
       scanf("%d%d",&n,&h);
       int a,ans=0;
       for(int i=0;i<n;i++)
       {
           scanf("%d",&a);
           if(a>h)
                ans++;
            ans++;
       }
       printf("%d\n",ans);
    }
    return 0;
}