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
long long matrix(long long r,long long c)
{
    if(r==1 || c==1)
    return 1;
    
    return matrix(r-1,c)+matrix(r,c-1);
    
}
int main()
{
    long long n,z=0,o=0,i;
    scanf("%lld",&n);
    long long ans=matrix(n,n);
    printf("%lld",ans);
    return 0;
}