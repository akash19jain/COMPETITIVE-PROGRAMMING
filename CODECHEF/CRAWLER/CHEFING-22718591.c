/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:01/02/2019
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007

int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,ans=0;
        scanf("%lld",&n);
        char str[n+1][205];
        int count [26]={0};
        for(long long i=0;i<n;i++)
        {
            scanf("%s", str[i]);
            int l=strlen(str[i]);
            for(int j=0;j<l;j++)
            {
                int x=str[i][j]-'a';
                //printf("%d ",x);
                if(count[x]==i)
                count[x]++;
            }
        }
        for(int i=0;i<26;i++)
        {
            //printf("%d ",count[i]);
            if(count[i]==n)
            ans++;
        }
        printf("%lld\n",ans);
        
    }
    return 0;
}