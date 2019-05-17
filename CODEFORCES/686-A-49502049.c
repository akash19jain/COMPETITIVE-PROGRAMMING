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
    long long n,x;
    scanf("%lld%lld\n",&n,&x);
    long long ans=x,dis=0;
    while(n--)
    {
        char x;
        int a;
        scanf("%c %d\n",&x,&a);
        if(x=='+')
        {
            ans+=a;
        }
        else if(ans>=a)
        {
            ans-=a;
        }
        else
        {
            dis++;
        }
       // printf("%lld ",ans);
    }
    printf("%lld %lld",ans,dis);
    return 0;
}