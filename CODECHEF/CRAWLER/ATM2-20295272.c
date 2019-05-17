#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n,k;
        scanf("%lld%lld",&n,&k);
        long long arr[n],arr1[n];
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            if(k>=arr[i])
            {
                arr1[i]=1;
                k=k-arr[i];
            }
            else
            arr1[i]=0;
        }
        
        for(long long i=0;i<n;i++)
        printf("%lld",arr1[i]);
        
        printf("\n");
    }
}