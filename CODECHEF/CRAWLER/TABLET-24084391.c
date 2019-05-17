/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:25/04/2019 
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
        long long n,b,max=-1;
        scanf("%lld%lld",&n,&b);
        long long arr[n][3];
        for(long long i=0;i<n;i++)
        {
            scanf("%lld%lld%lld",&arr[i][0],&arr[i][1],&arr[i][2]);
            if(arr[i][2]<=b && (arr[i][0]*arr[i][1])>max)
                max=arr[i][0]*arr[i][1];
        }
        if(max==-1)
            printf("no tablet\n");
        else
            printf("%lld\n",max);
    }
    return 0;
}