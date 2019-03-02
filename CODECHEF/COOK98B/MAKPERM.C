https://www.codechef.com/COOK98B/problems/MAKPERM/

#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long arr[n];
        int arr1[n+1];
        for(long long i=1;i<=n;i++)
        arr1[i]=0;
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            if(arr[i]<=n)
            {
                arr1[arr[i]]=1;
            }
        }
        long long c=0;
        for(long long i=1;i<=n;i++)
        {
            if(arr1[i]==0)
            c++;
        }
            printf("%lld\n",c);
    }
    return 0;
}
