https://www.codechef.com/COON2019/problems/CDRN02/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:09/04/2019 
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
        long long a,b,c,d;
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
        long long ans=a-c+1;
        ans*=(b-d+1);
        printf("%lld\n",ans);
        
    }
    return 0;
}
