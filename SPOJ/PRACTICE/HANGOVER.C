https://www.spoj.com/problems/HANGOVER/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:11/01/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
   float n;
   scanf("%f",&n);
   while(n>0.0)
   {
       float ans=0;
       int i=0;
       for(i=2;;i++)
       {
           ans+=1.0/i;
           if(ans>=n)
           break;
       }
       printf("%d card(s)\n",i-1);
       scanf("%f",&n);
   }
}
