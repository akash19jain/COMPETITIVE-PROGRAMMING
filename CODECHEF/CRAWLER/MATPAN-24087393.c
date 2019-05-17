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
        long long price[26],i,ans=0;
        for(i=0;i<26;i++)
            scanf("%lld",&price[i]);
        int ava[26];
        memset(ava,0,sizeof(ava));
        char str[50005];
        
        scanf("\n%s", str);
        long long l=strlen(str);
        for(i=0;i<l;i++)
        {
            int x=str[i]-97;
            ava[x]=1;
        }
        for(i=0;i<26;i++)
        {
            if(ava[i]==0)
            ans+=price[i];
        }
        printf("%lld\n",ans);
    }
    return 0;
}