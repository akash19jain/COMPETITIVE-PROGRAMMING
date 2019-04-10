https://www.codechef.com/FOYO2019/problems/NCR19/


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
    
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
       long long n,r,sum=1,i,ans=0;
       char hex[4]={'\0'};
       scanf("%lld\n",&n);
       scanf("%s", hex);
       sum=hex[0]-48;
       ans+=(sum*pow(16,2));
       sum=hex[1]-65+10;
       ans+=(sum*pow(16,1));
       sum=hex[2]-48;
       ans+=(sum*pow(16,0));
       printf("%lld",ans);
       
    }
    
    return 0;
}
