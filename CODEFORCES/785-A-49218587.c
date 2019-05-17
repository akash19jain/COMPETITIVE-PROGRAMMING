/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:30/01/2019
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007

int main()
{
    long long n,ans=0;
    scanf("%lld",&n);
    char str[50];
    for(int i=0;i<n;i++)
    {
        scanf("%s", str);
        if(str[0]=='T')
        ans+=4;
        if(str[0]=='C')
        ans+=6;
        if(str[0]=='O')
        ans+=8;
        if(str[0]=='D')
        ans+=12;
        if(str[0]=='I')
        ans+=20;
    }
    printf("%lld",ans);
    return 0;
}