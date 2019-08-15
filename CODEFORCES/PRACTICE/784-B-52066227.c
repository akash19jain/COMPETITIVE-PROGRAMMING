/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:31/03/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
        int a[16]={1,0,0,0,1,0,1,0,2,1,1,2,0,1,0,0};
        long long n,ans=0;
        scanf("%lld",&n);
        if(n==0)
            ans=1;
        else
        {
            while(n>0)
            {
                ans+=a[n%16];
		        n/=16;
            }
        }
        printf("%lld\n",ans);
    }
    
    return 0;
}