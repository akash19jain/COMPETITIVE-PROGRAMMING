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
    long long d1,d2,d3,a,b;
    scanf("%lld%lld%lld",&d1,&d2,&d3);
    a=d1+d2+d3;
    b=d1+d3+d3+d1;
    if(a>b)
    a=b;
    b=d2+d2+d1+d1;
    if(a>b)
    a=b;
    b=d2+d3+d3+d2;
    if(a>b)
    a=b;
    
    
    printf("%lld",a);
    return 0;
}