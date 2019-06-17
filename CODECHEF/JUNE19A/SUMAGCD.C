https://www.codechef.com/JUNE19A/problems/SUMAGCD/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:15/06/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int cmp(const void * a,const void * b)
{
    if( *(long long int*)a - *(long long int*)b < 0 )
        return -1;
    if( *(long long int*)a - *(long long int*)b > 0 )
        return 1;
    return 0;
}
long long gcd(long long u,long long v)
{
    if (v == 0)
       return u; 
    else
       return gcd(v, u%v);
}
long long findmax(long long a,long long b)
{
    if(a>b)
        return a;
    return b;
}
long long findsum(long long arr[],long long l[],long long r[],long long n)
{
    if(n==1)
        return 2*arr[0];
    long long max=arr[0]+r[1];
    for(long long i=1;i<n-1;i++)
    {
        max=findmax(max,arr[i]+gcd(l[i-1],r[i+1]));
        
    }
    if(n>1)
    {
        max=findmax(max,arr[n-1]+l[n-2]);
    }
    return max;
}
int main()
{
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long arr[n];
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        qsort(arr,n,sizeof(arr[0]),cmp);
        long long arr1[n],a=0;
        for(long long i=0;i<n;i++)
        {
            while(i<n-1 && arr[i]==arr[i+1])
                i++;
            arr1[a++]=arr[i];
            //printf("%lld ",arr1[a-1]);
        }
        //printf("%lld\n",a);
        long long l[a+1],r[a+1];
        l[0]=arr1[0];
        //printf("%lld ",l[0]);
        for(long long i=1;i<a;i++)
        {
            l[i]=gcd(arr1[i],l[i-1]);
            //printf("%lld ",l[i]);
        }
        //printf("\n");
        r[a-1]=arr1[a-1];
        //printf("%lld ",r[n-1-1]);
        for(long long i=a-2;i>=0;i--)
        {
            r[i]=gcd(arr1[i],r[i+1]);
            //printf("%lld ",r[i]);
        }
        long long ans=findsum(arr1,l,r,a);
        printf("%lld\n",ans);
    }
    return 0;
}
