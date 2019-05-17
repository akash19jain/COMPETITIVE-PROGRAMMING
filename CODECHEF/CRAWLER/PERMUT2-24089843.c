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
    //scanf("%lld\n",&t);
    while(t--)
    {
        long long n,f=0;
        scanf("%lld",&n);
        while(n!=0)
        {
            f=0;
            long long arr[n];
            for(long long i=0;i<n;i++)
            {
                scanf("%lld",&arr[i]);
            }
            for(long long i=0;i<n;i++)
            {
                if(arr[arr[i]-1]!=(i+1))
                    f++;
            }
            if(f!=0)
                printf("not ambiguous\n");
            else
                printf("ambiguous\n");
            scanf("%lld",&n);
        }
        
    }
    return 0;
}