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
        long long n,k,r,c,i,k1,j,x=0;
        scanf("%lld%lld",&n,&k);
        k1=k;
        int row[n+1],col[n+1];
        memset(row,0, sizeof(row)); 
        memset(col,0, sizeof(col)); 
        while(k--)
        {
           scanf("%lld%lld",&r,&c);
           row[r]=1;
           col[c]=1;
        }
        printf("%lld ",n-k1);
        
        for(i=1,j=1;i<=n&&j<=n;)
        {
            if(row[i]==1)
            {
                i++;
                continue;
            }
            if(col[j]==1)
            {
                j++;
                continue;
            }
            
            printf("%lld %lld ",i,j);
            i++;
            j++;
        }
        printf("\n");
    }
    return 0;
}