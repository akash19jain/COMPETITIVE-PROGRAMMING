/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:31/03/2019 
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
        int a,b,c,d,ans;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        ans=((a^b)&(c|d))^((b&c)|(a^d));
        printf("%d\n",ans);
    }
    
    return 0;
}