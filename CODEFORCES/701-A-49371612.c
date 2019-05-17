/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:02/02/2019
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
    long long arr[2][n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[0][i]);
        arr[1][i]=i;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[0][i]>arr[0][j])
            {
                int t=arr[0][i];
                arr[0][i]=arr[0][j];
                arr[0][j]=t;
                t=arr[1][i];
                arr[1][i]=arr[1][j];
                arr[1][j]=t;
            }
        }
    }
    for(int i=0;i<n/2;i++)
    {
        printf("%lld %lld\n",arr[1][i]+1,arr[1][n-i-1]+1);
    }
    return 0;
}