https://www.codechef.com/LTIME70B/problems/POGOSTCK/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:30/03/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
       long long n,k,i,sum=0,max=-100000000,z=-100000000;
       scanf("%lld%lld",&n,&k);
       long long arr[n];
       for(i=0;i<n;i++)
       {
           scanf("%lld",&arr[i]);
           if(i>=(n-k) && arr[i]>z)
                z=arr[i];
       }
       for(i=0;i<=k;i++)
       {
           sum=0;
           for(long long j=i;j<n;j=j+k)
           {
               if(sum<=0 && arr[j]>=0)
               {
                    sum=arr[j];
               }
               else
                 sum+=arr[j];
           }
                
           if(sum>max)
            max=sum;
           
       }
       if(z>max)
            max=z;
            
       printf("%lld\n",max);
    }
    
    return 0;
}
