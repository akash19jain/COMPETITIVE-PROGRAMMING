https://www.codechef.com/MAY19B/problems/BINARY/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:09/05/2019 
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
       long long n,z;
       scanf("%lld%lld",&n,&z);
       int arr[n];
       long long ze=0;
       for(long long i=0;i<n;i++)
       {
            scanf("%d",&arr[i]);
            if(arr[i]==0)
                ze++;
       }
       if(z>=n)
       {
           for(long long i=0;i<n-ze;i++)
                printf("1 ");
            for(long long i=0;i<ze;i++)
                printf("0 ");
            printf("\n");
            
            continue;
       }
       if(ze==0)
       {
           for(long long i=0;i<n;i++)
                printf("1 ");
            printf("\n");
            
            continue;
       }
       if(ze==n)
       {
           for(long long i=0;i<n;i++)
                printf("0 ");
            printf("\n");
            
            continue;
       }
        for(long long i=0;i<z;i++)
        {
            for(long long j=0;j<n-1;j++)
            {
                if(arr[j]==0 && arr[j+1]==1)
                {
                    arr[j]=1;
                    arr[j+1]=0;
                    j++;
                }
            }
        }
        
       for(long long i=0;i<n;i++)
            printf("%lld ",arr[i]);
        printf("\n");
    }
    return 0;
}
