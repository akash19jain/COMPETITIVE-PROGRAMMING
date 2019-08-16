/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:05/07/2019 
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
        long long n;
        scanf("%lld",&n);
        long long arr[n],sum=0;
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            sum+=arr[i];
        }
        double mean=(double)sum/n;
        long long pos=-1;
        for(long long i=0;i<n;i++)
        {
            if(arr[i]==mean)
            {
                pos=i;
                break;
            }
        }
        if(pos==-1)
            printf("Impossible\n");
        else
            printf("%lld\n",pos+1);
    }
    return 0;
}