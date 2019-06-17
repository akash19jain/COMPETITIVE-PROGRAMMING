https://www.codechef.com/MAY19B/problems/MATCHS/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:07/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007
int main()
{
    
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
       long long n,m,s,l;
       scanf("%lld%lld",&n,&m);
       int f=0;
       if(n>=2*m || m>=2*n)
       {
           printf("Ari\n");
           continue;
       }
       else
       {
           if(n>m)
           {
               s=m;
               l=n;
           }
           else
           {
               s=n;
               l=m;
           }
           long long c=0;
           while(l>0 && s>0)
           {
               c++;
               l=l-s;
               
               if(l!=0 && (l>=2*s || s>=l*2))
               {
                   if(c%2==0)
                   {
                       printf("Ari\n");
                       f=1;
                       break;
                   }
                   else
                   {
                       printf("Rich\n");
                       f=1;
                       break;
                   }
               }
               if(l<s)
               {
                   long long v=l;
                   l=s;
                   s=v;
               }
           }
           if(f==0)
           {
               c++;
               if(c%2==0)
               {
                   printf("Ari\n");
                   f=1;
               }
               else
               {
                   printf("Rich\n");
                   f=1;
               }
           }
       }
    }
    return 0;
}
