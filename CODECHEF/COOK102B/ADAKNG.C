https://www.codechef.com/COOK102B/problems/ADAKNG/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:20/01/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007
bool prime[5000001]; 

int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long r,c,k,ans=0;
        int x[]={2,8,18,32,50,72,98,128};
        scanf("%lld%lld%lld",&r,&c,&k);
        k=k*k;
        for(int i=1;i<=8;i++)
        {
            for(int j=1;j<=8;j++)
            {
                long long a=((i-r)*(i-r));
                long long b=((j-c)*(j-c));
                if(a<=k && b<=k)
                ans++;
                
            }
        }
        printf("%lld\n",ans);
    }
}
