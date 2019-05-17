/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:04/02/2019
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
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        printf("Q 0 0\n");
        fflush(stdout);
        long long a;
        scanf("%lld",&a);
        
        printf("Q 1000000000 0\n");
        fflush(stdout);
        long long b;
        scanf("%lld",&b);
        
        printf("Q 0 1000000000\n");
        fflush(stdout);
        long long c;
        scanf("%lld",&c);
        
        long long d=a-b+1000000000;
        long long e=a-c+1000000000;
        
        printf("Q %lld 0\n",d/2);
        fflush(stdout);
        long long f;
        scanf("%lld",&f);
        
        printf("Q 0 %lld\n",e/2);
        fflush(stdout);
        long long g;
        scanf("%lld",&g);
        
        long long i=e-f;
        long long h=d-g;
        
        printf("A %lld %lld %lld %lld\n",g,f,h,i);
        fflush(stdout);
        
        long long j;
        scanf("%lld",&j);
        if(j<0)
        return 0;
    }
    return 0;
}