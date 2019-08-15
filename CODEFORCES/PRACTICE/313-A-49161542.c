/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:29/01/2019
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007
int main()
{
    long long n;
    scanf("%lld",&n);
    if(n>=0)
    printf("%lld",n);
    else
    {
        int r1=-n%10;
        int r2=-n%100;
        r2=r2/10;
        n=n/100;
        //printf("%lld\n",n);
        if(r1>r2)
        r1=r2;
        
        n=(n*10)-r1;
        printf("%lld",n);
    }
    return 0;
}