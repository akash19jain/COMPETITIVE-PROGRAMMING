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
        long long n,f=0;
        scanf("%lld",&n);
        long long arr[n];
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        if(n%2==0)
        {
            printf("no\n");
            continue;
        }
        for(long long i=0;i<n/2;i++)
        {
            if(arr[i]==i+1 && arr[n-i-1]==i+1)
                continue;
            else
            {
                f=1;
                break;
            }
        }
        if(arr[n/2]!=n/2+1)
            f=1;
        if(f==0)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}