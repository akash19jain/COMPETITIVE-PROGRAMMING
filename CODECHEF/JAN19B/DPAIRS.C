https://www.codechef.com/JAN19B/problems/DPAIRS/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:04/01/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int t=1;
    while(t--)
    {
        long long n,m,i,count,j;
        scanf("%lld%lld",&n,&m);
        count=n+m-1;
        long long arr1[n];
        long long arr2[m];
        bool *ans=(bool*)calloc(2000000009,sizeof(bool));
        bool *nans=(bool*)calloc(2000000009,sizeof(bool));
       // bool ans[2000009]={0};
       long long min1=1000000001,p1=0;
       long long max1=-1000000001,p2=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr1[i]);
            if(arr1[i]<min1)
            {
                min1=arr1[i];
                p1=i;
            }
        }
        for(i=0;i<m;i++)
        {
            scanf("%lld",&arr2[i]);
            if(arr2[i]>max1)
            {
                max1=arr2[i];
                p2=i;
            }
            printf("%lld %lld\n",p1,i);
        }
        for(i=0;i<n;i++)
        {
            if(i==p1)
            {
                continue;
            }
            printf("%lld %lld\n",i,p2);
        }
    }
}
