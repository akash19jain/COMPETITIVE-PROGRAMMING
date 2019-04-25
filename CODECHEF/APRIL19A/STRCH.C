https://www.codechef.com/APRIL19A/problems/STRCH/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:07/04/2019 
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
        long long n,ans=0,i,j,k=0,last=-1;
        scanf("%lld\n",&n);
        char str[n+5],x;
        scanf("%s", str);
        scanf(" %c\n",&x);
        for(i=0;i<n;i++)
        {
            if(str[i]==x)
            {
                last=i;
            }
        }
        for(i=0;i<=last;i++)
        {
            for(j=i;j<=last;j++)
            {
                if(str[j]==x)
                {
                    k=j;
                    break;
                }
            }
            ans+=n-k;
        }
        //ans++;
        printf("%lld\n",ans);
    }
    return 0;
}
