https://www.spoj.com/problems/AE00/

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
   int t;
   scanf("%d",&t);
   
   long long ans=0;
   ans=sqrt(t);
   
   for(int i=1;i<=sqrt(t);i++)
   {
       for(int j=i+1;i*j<=t;j++)
       {
           ans++;
       }
   }
       
    printf("%lld\n",ans);
     return 0;
}
