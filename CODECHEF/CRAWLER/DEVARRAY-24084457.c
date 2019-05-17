/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:25/04/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t=1;
    //scanf("%lld\n",&t);
    while(t--)
    {
        long long n,q;
        scanf("%lld%lld",&n,&q);
        long long arr[n],max=0,min=1000000000;
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            if(max<arr[i])
                max=arr[i];
            if(min>arr[i])
                min=arr[i];
        }
        while(q--)
        {
            long long x;
            scanf("%lld",&x);
            if(x>=min && x<=max)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}