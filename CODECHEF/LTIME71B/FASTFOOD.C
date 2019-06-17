https://www.codechef.com/LTIME71B/problems/FASTFOOD/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:27/04/2019 
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
        long long a[n],b[n],sum=0,sum1=0,max=0;
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            sum+=a[i];
        }
        max=sum;
         for(long long i=0;i<n;i++)
        {
            scanf("%lld",&b[i]);
        }
         for(long long i=n-1;i>=0;i--)
        {
            sum-=a[i];
            sum+=b[i];
            if(sum>max)
                max=sum;
        }
        printf("%lld\n",max);
    }
    return 0;
}
