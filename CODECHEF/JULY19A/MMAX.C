/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:07/07/2019 
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
        long long n,ans=0,k=0;
        scanf("%lld",&n);
        char str[100007];
        scanf("\n%s", str);
        
        long long res=0;
        long long l=strlen(str);
        for (long long i = 0; i < l; i++) 
            res = (res*10 + str[i] - '0') %n; 
        
        long long r=res;
        if(k>=n && k%n==0)
            ans=0;
        
        else if(k<n)
        {
            if(k>n/2)
            {
                long long z=n-k;
                if(z!=1)
                    ans=z+2;
                else
                    ans=2;
            }
            else if(k==n/2)
                ans=n-1;
            else
                ans=k+2;
        }
        else
        {
            long long a=k/n;
            long long b=k-(a*n);
            k=b;
            if(k>n/2)
            {
                long long z=n-k;
                if(z!=1)
                    ans=z+2;
                else
                    ans=2;
            }
            else if(k==n/2)
                ans=n-1;
            else
                ans=k+2;
        }
        
        if(n%2==0)
        {
            if(n/2>r)
            {
                ans=r;
                ans+=r;
            }
            else if(n/2==r)
                ans=n-1;
            else
                ans=(n-r)*2;
        }
        else
        {
            if(n/2==r+1)
                ans=n-1;
            else if(n/2==r)
                ans=n-1;
            else if(n/2<r)
                ans=(n-r)*2;
            else
            {
                ans=r;
                ans+=r;
            }
                
        }
        printf("%lld\n",ans);
    }
    return 0;
}