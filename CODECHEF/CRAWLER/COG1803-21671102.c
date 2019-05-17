/* 
*       AUTHOR:   AKASH JAIN
*       DATE:   21-NOV-2018
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,pos=0,neg=0;
        scanf("%lld",&n);
        int arr[n];
        for(long long i=0;i<n;i++)
        {
           scanf("%d",&arr[i]);
           if(arr[i]==1)
           pos++;
           if(arr[i]==-1)
           neg++;
        }
        if(pos>=neg)
        printf("YES\n");
        else
        printf("NO\n");
    }
    
    return 0;
}