/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:29/01/2019
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007
int main()
{
    long long n,z=0,o=0,i;
    scanf("%lld",&n);
    char str[n+1];
    scanf("%s", str);
    for(i=0;i<n;i++)
    {
        if(str[i]=='1')
        o++;
        else 
        z++;
    }
    long long ans=abs(o-z);
    printf("%lld",ans);
    return 0;
}