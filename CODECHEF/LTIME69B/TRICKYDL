https://www.codechef.com/LTIME69B/problems/TRICKYDL/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:23/02/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    long long chef[50];
    chef[0]=1;
    for(long long i=1;i<40;i++)
    {
        chef[i]=chef[i-1]*2+1;
        //printf("%lld ",chef[i]);
    }
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
       long long a,d1=0,d2=0,x,max=0;
       scanf("%lld",&a);
       x=0;
       for(long long i=0;i<40;i++)
       {
           x=x+a;
           if(x<=chef[i] && d1==0)
           {
              d1=i;
           }
           if(x-chef[i]>max)
           {
               max=x-chef[i];
               d2=i+1;
           }
       }
       printf("%lld %lld\n",d1,d2);
    }
}
