https://www.spoj.com/problems/FASHION/

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
   while(t--)
   {
       int n;
       scanf("%d",&n);
       int arr[n];
       int arr1[n];
       for(int i=0;i<n;i++)
       {
            scanf("%d",&arr[i]);
       }
       for(int i=0;i<n;i++)
       {
            scanf("%d",&arr1[i]);
       }
       for(int i=0;i<n-1;i++)
       {
           for(int j=i+1;j<n;j++)
           {
               if(arr[i]>arr[j])
               {
                   int t=arr[i];
                   arr[i]=arr[j];
                   arr[j]=t;
               }
               if(arr1[i]>arr1[j])
               {
                   int t=arr1[i];
                   arr1[i]=arr1[j];
                   arr1[j]=t;
               }
           }
       }
       long long ans=0;
       for(int i=0;i<n;i++)
       ans+=arr[i]*arr1[i];
       
       printf("%lld\n",ans);
       
   }
}
 
