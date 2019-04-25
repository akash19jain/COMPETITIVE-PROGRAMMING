https://www.codechef.com/APRIL19A/problems/MAXREM/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:05/04/2019 
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
    //scanf("%lld",&t);
    while(t--)
    {
        long long n,ans=0,i,max=0,max1=0;
        scanf("%lld",&n);
        long long arr[n];
        for(i=0;i<n;i++)
            scanf("%lld",&arr[i]);
        qsort(arr,n,sizeof(arr[0]),cmp);
        max=arr[0];
        max1=max;
        for(i=0;i<n;i++)
        {
            if(arr[i]!=max)
            {
                max1=arr[i];
                break;
            }
        }
        ans=max1%max;
        printf("%lld\n",ans);
    }
    return 0;
}
