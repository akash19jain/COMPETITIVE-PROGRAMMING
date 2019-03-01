https://www.codechef.com/FEB19A/problems/DEPCHEF/

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
        long long n,p=-1;
        scanf("%lld",&n);
        long long a[n];
        long long d[n];
        for(int i=0;i<n;i++)
            scanf("%lld",&a[i]);
            
        for(int i=0;i<n;i++)
            scanf("%lld",&d[i]);
            
        if(d[0]>(a[1]+a[n-1]) && d[0]>p)
        {
            p=d[0];
        }
        for(long long i=1;i<n-1;i++)
        {
            if(d[i]>(a[i+1]+a[i-1]) && d[i]>p) 
                p=d[i];
        }
        
        if(d[n-1]>(a[0]+a[n-2])&&d[n-1]>p)
            p=d[n-1];
        
        printf("%lld\n",p);
    }
    return 0;
}
