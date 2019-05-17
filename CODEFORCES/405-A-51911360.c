/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:27/03/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int cmp(const void * a,const void * b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
       int n;
       scanf("%d",&n);
       int arr[n];
       for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        qsort(arr,n,sizeof(arr[0]),cmp);
        for(int i=0;i<n;i++)
            printf("%d ",arr[i]);
    }
    return 0;
}