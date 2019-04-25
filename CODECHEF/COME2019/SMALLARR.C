https://www.codechef.com/COME2019/problems/SMALLARR/

// SOURCE FOR MAX SUM:https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:14/04/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
long long maxSubArraySum(long long a[], long long size) 
        { 
            long long max_so_far =-1000000000, max_ending_here = 0; 
          
            for (long long i = 0; i < size; i++) 
            { 
                max_ending_here = max_ending_here + a[i]; 
                if (max_so_far < max_ending_here) 
                    max_so_far = max_ending_here; 
          
                if (max_ending_here < 0) 
                    max_ending_here = 0; 
            } 
            
            return max_so_far; 
        }
int main()
{
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
        long long n,c=0;
        float x;
        scanf("%lld%f\n",&n,&x);
        long long arr[n];
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            c+=arr[i];
        }
        long long sum=maxSubArraySum(arr,n);
        //printf("%lld\n",sum);
        float max=c-sum+(sum/x);
        if(c<max)
            max=c;
        printf("%f\n",max);
    }
    return 0;
}
