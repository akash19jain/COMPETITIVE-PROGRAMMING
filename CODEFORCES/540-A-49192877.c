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
    char str1[n];
    char str2[n];
    scanf("%s", str1);
    scanf("%s", str2);
    
    for(int i=0;i<n;i++)
    {
        int x=abs(str1[i]-str2[i]);
        int x1=10-x;
        if(x<x1)
        ans+=x;
        else
        ans+=x1;
    }
    printf("%lld",ans);
    return 0;
}