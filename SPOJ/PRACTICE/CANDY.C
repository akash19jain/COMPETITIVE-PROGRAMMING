https://www.spoj.com/problems/CANDY/

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
       int arr[n];
       float sum=0,ans=0;
       for(int i=0;i<n;i++)
       {
            scanf("%d",&arr[i]);
            sum=sum+arr[i];
       }
       if(ceil(sum/n)!=floor(sum/n))
       {
           printf("-1\n");
       }
       else
       {
           int a=sum/n;
           for(int i=0;i<n;i++)
           {
               if(arr[i]<a)
               ans+=(a-arr[i]);
           }
           printf("%.0f\n",ans);
       }
       scanf("%d",&n);
   }
}
