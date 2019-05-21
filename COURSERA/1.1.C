/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:21/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define MOD 1000000007

int main()
{
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        long long ans=0,n1,n2;
        
        if(z==0)
        {
            ans=0;
            printf("%lld\n",ans);
            continue;
        }
        else if((x-y)==0)
        {
            if(z==x)
                ans=1;
            else
                ans=-1;
            printf("%lld\n",ans);
            continue;
        }
        
        if(z%(x-y)==0)
        {
            n1 = z/(x-y) + 1;
            n1 = 2*(n1-1);
        }
        
        else
            n1 = 100000000;
            
        if((z-x)%(x-y)==0)
        {
            n2 = (z-x)/(x-y) + 1;
            n2 = 2*n2-1;
        }
        
        else 
            n2 = 100000000;
            
        if(n1<0) 
            n1=100000000;
        if(n2<0) 
            n2=100000000;
        
        if(n1<n2)
            printf("%lld\n",n1);
        else if(n2<n1)
            printf("%lld\n",n2);
            
        else
            printf("-1\n");
        
    }
    return 0;
}
