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
        long long n,sum1=0,sum2=0;
        scanf("%lld",&n);
        long long a[n],b[n];
        for(long long i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(long long i=0;i<n;i++)
            scanf("%lld",&b[i]);
        for(long long i=0;i<n;i++)
        {
            if(i%2==0)
            {
                sum1+=a[i];
                sum2+=b[i];
            }
            else
            {
                sum2+=a[i];
                sum1+=b[i];
            }
        }
        if(sum1<sum2)
            sum2=sum1;
        printf("%lld\n",sum2);
        
    }
    return 0;
}