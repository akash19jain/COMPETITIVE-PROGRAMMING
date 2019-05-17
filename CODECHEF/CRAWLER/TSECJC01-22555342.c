/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:20/01/2019 
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
        long long l,d,h;
        scanf("%lld%lld%lld",&l,&d,&h);
        if(l*h>=d)
        printf("Yes\n");
        else
        printf("No\n");
    }
}