https://www.codechef.com/JUNE19A/problems/LENTMO/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:16/06/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define MOD 1000000007
long long dif[100005];
long long arrsum(long long arr[],long long n)
{
    long long sum=0;
    for(long long i=0;i<n;i++)
        sum+=arr[i];
    return sum;
}
void diff(long long arr[],long long arr1[],long long n)
{
    for(long long i=0;i<n;i++)
    {
        dif[i]=arr1[i]-arr[i];
    }
}
int cmp(const void * a,const void * b)
{
    if( *(long long int*)a - *(long long int*)b < 0 )
        return 1;
    if( *(long long int*)a - *(long long int*)b > 0 )
        return -1;
    return 0;
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
        long long sum=arrsum(arr,n);
        long long k,x;
        scanf("%lld%lld",&k,&x);
        long long arr1[n];
        for(long long i=0;i<n;i++)
        {
            arr1[i]=x^arr[i];
        }
        diff(arr,arr1,n);
        qsort(dif,n,sizeof(dif[0]),cmp);
        long long c=0,max=0;
        long long c1=0;
        if(n==k)
        {
            for(long long i=0;i<n;i++)
                c1+=arr1[i];
        }
        if(k%2==1)
        {
            //max=dif[0];
            for(long long i=0;i<n;i++)
            {
                c+=dif[i];
                if(c>max)
                    max=c;
            }
            sum++;
        }
        else
        {
            //max=dif[1];
            for(long long i=0;i<n;i++)
            {
                c+=dif[i];
                if(i%2!=0)
                {
                    if(max<c)
                        max=c;
                }
            }
            sum++;
        }

        if(n==k)
        {
            long long ans=c1;
            sum--;
            if(sum>ans)
                ans=sum;
            
            printf("%lld\n",ans);
        }
        else
        {
            long long ans=sum;
            ans+=max;
            ans--;
            printf("%lld\n",ans);
        }
    }
    return 0;
}
