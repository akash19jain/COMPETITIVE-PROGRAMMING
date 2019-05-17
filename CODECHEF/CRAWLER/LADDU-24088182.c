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
    scanf("%lld\n",&t);
    while(t--)
    {
        long long n,ans=0;
        scanf("%lld",&n);
        char str[20];
        scanf("\n%s", str);
        int f=0;
        if(str[0]=='I')
        f=0;
        else
        f=1;
        char str1[50];
        int d1;
        while(n--)
        {
            scanf("\n%s", str1);
            if(str1[0]=='T')
                ans+=300;
            else if(str1[0]=='B')
            {
                scanf("%d",&d1);
                ans+=d1;
            }
            else if(str1[8]=='H')
                ans+=50;
            else
            {
                scanf("%d",&d1);
                ans+=300;
                if(d1<=20)
                    ans+=20-d1;
            }
        }
        if(f==0)
            ans=ans/200;
        else
            ans=ans/400;
        printf("%lld\n",ans);
    }
    return 0;
}