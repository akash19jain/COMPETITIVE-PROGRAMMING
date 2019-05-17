/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:26/04/2019 
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
        char str[55];
        scanf("\n%s", str);
        long long u=0,d=0,ans=0,l=strlen(str);
        if(str[0]=='U')
            u++;
        else
            d++;
        for(int i=1;i<l;i++)
        {
            if(str[i]!=str[i-1])
            {
                if(str[i]=='U')
                    u++;
                else
                    d++;
            }
        }
        if(u<d)
            ans=u;
        else
            ans=d;
        printf("%lld\n",ans);
    }
    return 0;
}