/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:01/03/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,sp=0,sn=0,l=0,s=0;
        scanf("%lld",&n);
        long long arr[n];
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            if(arr[i]>0)
            sp++;
            else
            sn++;
        }
        if(sp>sn)
        {
            l=sp;
            if(sn==0)
            {
                s=sp;
            }
            else
                s=sn;
        }
        else
        {
            l=sn;
            if(sp==0)
            {
                s=sn;
            }
            else
                s=sp;
        }
        printf("%lld %lld\n",l,s);
    }
    return 0;
}