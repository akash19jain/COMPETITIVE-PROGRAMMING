https://www.spoj.com/problems/SAMER08F/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:12/01/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
   int n;
   scanf("%d",&n);
   while(n>0)
   {
       long long ans=0;
       ans=(n*(n+1)*((2*n)+1))/6;
       printf("%lld\n",ans);
       scanf("%d",&n);
   }
}
