/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:17/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int cmp(const void * a,const void * b)
{
    return (*(int*)b - *(int*)a);
}

int main()
{
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long a[n],b[n];
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&b[i]);
        }
        qsort(a,n,sizeof(a[0]),cmp);
        qsort(b,n,sizeof(b[0]),cmp);
        if((a[0]+a[1])<=(b[0]+b[1]))
            printf("DAKSH\n");
        else
            printf("AAYUSHI\n");
    }
    return 0;
}