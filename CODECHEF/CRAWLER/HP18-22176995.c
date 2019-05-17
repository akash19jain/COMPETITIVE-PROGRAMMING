/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:04/01/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n,a,b;
        scanf("%lld%lld%lld",&n,&a,&b);
        long long arr[n];
        long long p=0,q=0,r=0;
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            if(arr[i]%a==0 && arr[i]%b==0)
            r++;
            else if(arr[i]%a==0)
            p++;
            else if(arr[i]%b==0)
            q++;
            else{}
        }
        //printf("%lld %lld %lld ",p,q,r);
        if(a==b)
        printf("BOB\n");
        else if(r==0 && p>q)
        printf("BOB\n");
        else if(r==0 && p<=q)
        printf("ALICE\n");
        
        else if(r>=1 && p==0 && q==0)
        printf("BOB\n");
        
        else if(r>=1 && p>=q)
        printf("BOB\n");
        
        else
        printf("ALICE\n");
    }
}