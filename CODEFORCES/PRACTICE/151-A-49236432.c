/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:31/01/2019
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007

int main()
{
    int n, k, l, c, d, p, nl, np,ans=0;
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
    
    long long a1=k*l/(n*nl);
    long long a2=c*d/n;
    long long a3=p/(np*n);
   // printf("%d %d %d ",a1,a2,a3);
    if(a1<a2 && a1<a3)
        ans=a1;
    else if(a1>a2 && a2<a3)
        ans=a2;
    else
        ans=a3;
    printf("%d",ans);
    return 0;
}