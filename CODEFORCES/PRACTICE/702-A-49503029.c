/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:05/02/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007

int main()
{
    long long n;
    scanf("%lld",&n);
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long max=1,cur=1;
     for(long long i=0;i<n-1;i++)
     {
             if(arr[i]<arr[i+1])
             {
                cur++;
                if(cur>max)
                max=cur;
             }
             else
            cur=1;
       //  printf("%lld ",cur);
     }
     printf("%lld",max);
    return 0;
}