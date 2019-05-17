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
    scanf("%lld",&t);
    while(t--)
    {
        long long n,k;
        scanf("%lld%lld",&n,&k);
        long long arr[n],c=0;
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            if(arr[i]>1)
                c++;
        }
        if(c<=k)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}