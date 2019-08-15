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
    long long d1,d2,d3,a1,a2,a3,a,d,n;
    scanf("%lld%lld%lld",&d1,&d2,&d3);
    scanf("%lld%lld%lld",&a1,&a2,&a3);
    scanf("%lld",&n);
    d=d1+d2+d3;
    a=a1+a2+a3;
    d=ceil(d/5.0);
    a=ceil(a/10.0);
    if(d+a<=n)
    printf("YES");
    else
    printf("NO");
    
    
   // printf("%lld %lld",d,a);
    return 0;
}