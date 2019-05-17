/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:26/01/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007
int cmp(const void * a,const void * b)
{
    return (*(int*)b - *(int*)a);
}
int main()
{
    long long t;
    scanf("%lld\n",&t);
    while(t--)
    {
        long long n,i,flag=0;;
        scanf("%lld",&n);
        long long a[n+1];
        long long b[n+1];
        for(i=1;i<=n;i++)
        scanf("%lld",&a[i]);
        for(i=1;i<=n;i++)
        scanf("%lld",&b[i]);
        if(a[1]!=0 || b[n]!=0 || (a[n]!=b[1]))
        {
            flag=1;
            printf("No\n");
            continue;
        }
        for(int i=2;i<n;i++)
        {
            if(a[i]+b[i]<a[n] ||a[n]+b[i]<a[i] ||a[n]+a[i]<b[i] || a[i]==0 || b[i]==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        printf("No\n");
        else
        printf("Yes\n");
    }
    return 0;
}