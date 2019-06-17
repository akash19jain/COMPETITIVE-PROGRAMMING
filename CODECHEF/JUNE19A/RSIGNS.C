https://www.codechef.com/JUNE19A/problems/RSIGNS/

//MODULAR EXPONENTIAL POWER CODE USED FROM https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:14/06/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define MOD 1000000007
long long solve(long long x, long long y) 
{ 
    long long ans = 1;
    x = x % MOD;  
  
    while (y > 0) 
    { 
        if (y & 1) 
            ans = (ans*x) % MOD; 
  
        y = y>>1;
        x = (x*x) % MOD;   
    } 
    return ans; 
} 
int main()
{
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        unsigned long long ans=5*solve(2,n);
        ans=ans%MOD;
        /*for(long long i=0;i<n;i++)
        {
            ans*=2;
            ans=ans%MOD;
        }*/
        printf("%llu\n",ans);
    }
    return 0;
}
