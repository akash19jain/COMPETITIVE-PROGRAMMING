https://www.codechef.com/LTIME71B/problems/MINARRS/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:27/04/2019 
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
    scanf("%lld\n",&t);
    while(t--)
    {
        long long n;
        scanf("%lld\n",&n);
        long long arr[n],max=1000000000000,value=0;
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        qsort(arr,n,sizeof(arr[0]),cmp);
        long long new[n],a=0;
        new[a++]=arr[0];
        for(long long i=1;i<n;i++)
        {
            if(arr[i]!=arr[i-1])
                new[a++]=arr[i];
        }
        for(long long i=0;i<a;i++)
        {
            value=new[i];
            long long sum=0;
            for(long long j=0;j<n;j++)
            {
                sum+=arr[j]^value;
            }
            if(sum<max)
                max=sum;
            
        }
        printf("%lld\n",max);
    }
    return 0;
}
