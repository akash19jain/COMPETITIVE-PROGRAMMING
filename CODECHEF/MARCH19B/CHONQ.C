https://www.codechef.com/MARCH19B/problems/CHONQ/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:01/03/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,k,s=0,max=0;
        scanf("%lld%lld",&n,&k);
        max=n;
        long long arr[n];
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        for(long long i=0;i<n;i++)
        {
            for(long long j=i;j<n;j++)
            {
                s+=arr[j]/(j-i+1);
            }
            if(s<=k)
            {
                max=i;
                break;
            }
            s=0;  
        }
        printf("%lld\n",max+1);
    }
    return 0;
}
