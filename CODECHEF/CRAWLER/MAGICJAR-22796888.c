/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:01/02/2019
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007

int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long arr[n],max=1;
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            max+=arr[i]-1;
        }
        printf("%lld\n",max);
    }
    return 0;
}