/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:26/04/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t=1;
    scanf("%lld\n",&t);
    while(t--)
    {
        long long n,k;
        scanf("%lld%lld",&n,&k);
        long long arr[n],sum=0;
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            sum+=arr[i];
        }
        if(sum%2==0)
        {
            if(k>1)
            sum=0;
            else
            sum=1;
        }
        else
            sum=0;
            
        
        if(sum%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}