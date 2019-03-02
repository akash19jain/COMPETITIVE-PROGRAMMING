https://www.spoj.com/problems/ACPC10A/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE;03/01/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
 
int main()
{
    long long a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    while(a!=0 || b!=0 || c!=0)
    {
        if(b-a == c-b)
        {
            printf("AP %lld\n",c+(c-b));
        }
        else
        {
            printf("GP ");
            long long x=b/a;
            printf("%lld\n",c*x);
        }
        scanf("%lld%lld%lld",&a,&b,&c);
    }
} 
