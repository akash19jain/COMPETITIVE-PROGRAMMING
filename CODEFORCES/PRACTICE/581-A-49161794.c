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
    long long a,b;
    scanf("%lld%lld",&a,&b);
    if(a<b)
    {
        printf("%lld ",a);
        b=b-a;
        printf("%lld",(b/2));
    }
    else
    {
        printf("%lld ",b);
        a=a-b;
        printf("%lld",(a/2));
    }
    
    return 0;
}