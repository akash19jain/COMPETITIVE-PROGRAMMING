/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:31/03/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int cmp(const void * a,const void * b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
        double t=clock();
        long long n;
        scanf("%lld",&n);
        long long arr[n];
        for(long long i=0;i<n;i++)
            scanf("%lld",&arr[i]);
        qsort(arr,n,sizeof(arr[0]),cmp);
        while(clock()-t<=1500);
        for(long long i=0;i<1500;i++);
        for(long long i=0;i<n;i++)  
            printf("%lld ",arr[i]);
    }
    
    return 0;
}