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
unsigned long long gcd(unsigned long long a, unsigned long long b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        unsigned long long n,a,b,k,x1,x2,x3,x4,ans=0;
        scanf("%llu%llu%llu%llu",&n,&a,&b,&k);
        x1=n/a;
        x2=n/b;
        x4=(a*b)/gcd(a,b);
        x3=n/(x4);
        ans=x1+x2-x3-x3;
        //printf("%lld %lld %lld %lld ",x1,x2,x3,ans);
        if(a==b)
        ans=0;
        if(ans>=k)
        printf("Win\n");
        else
        printf("Lose\n");
    }
    return 0;
}