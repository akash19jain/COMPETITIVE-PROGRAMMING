/*  AUTHOR:AKASH JAIN
 *   USERNAME:akash19jain
 *   DATE:14/02/2019
 */
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void * a,const void * b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,ans=0,f=0;
        scanf("%lld",&n);
        long long arr[n];
        for(int i=0;i<n;i++)
            scanf("%lld",&arr[i]);
        qsort(arr,n,sizeof(arr[0]),cmp);
        for(long long i=0;i<n;i++)
        {
            if(arr[i]<=ans)
            ans++;
            else 
            break;
        }
        
        printf("%lld\n",ans);
    }
    return 0;
}