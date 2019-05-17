/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:05/02/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007
int cmp(const void * a,const void * b)
{
    return (*(int*)b - *(int*)a);
}
int main()
{
    long long n,m,ans=0;
    scanf("%lld%lld",&n,&m);
    
    if(n>=28)
    ans=m;
    else
    ans=m%(1<<n);
    
    printf("%lld",ans);
     
    return 0;
}