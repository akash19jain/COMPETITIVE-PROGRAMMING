/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:06/02/2019 
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
    long long n,k;
    scanf("%lld%lld",&n,&k);
    long long x=n/k;
    if(x%2==1)
     printf("YES");
     else
     printf("NO");
    return 0;
}