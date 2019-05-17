/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:26/03/2019 
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
        bool ans[105];
        memset(ans,false,105);
        long long n,x;
        scanf("%lld%lld",&n,&x);
        char str[n][105];
        for(int i=0;i<n;i++)
        {
            long long a;
            scanf("%lld",&a);
            ans[a]=1;
        }
        long long f=ans[x];
        for(long long i=0;i<x;i++)
            f+=!ans[i];
            
        printf("%lld\n",f);
    }
    return 0;
}