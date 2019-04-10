https://www.codechef.com/FOYO2019/problems/MAR14/


/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:01/04/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long ans[]={1,3,3,12,12,60,540,1080,6480,32400,97200,486000,
 3888000,34992000,244944000,2204496000,6613488000,
 13226976000,39680928000,317447424000,
 1269789696000,7618738176000,15237476352000,
 91424858112000,365699432448000,1097098297344000,3291294892032000,26330359136256000,78991077408768000,157982154817536000,1105875083722752000,9952875753504768000,49764378767523840000};
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
       long long n,r,sum=1,i;
       scanf("%lld",&n);
       printf("%lld",ans[n]);
       
    }
    
    return 0;
}
