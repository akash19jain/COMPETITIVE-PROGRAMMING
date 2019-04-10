https://www.codechef.com/FOYO2019/problems/PRF8/


/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:01/04/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
       long long n,r,sum=1,i;
       scanf("%lld",&n);
       for(i=2;i*i<=n;i++)
       {
           if(n%i==0)
           {
          if(i*i!=n) 
                sum = sum + i + n/i; 
            else
                sum=sum+i; 
           }
       }
       //printf("%lld ",sum);
       if(sum==n)
        printf("Perfect\n");
        else
        printf("Not Perfect\n");
    }
    
    return 0;
}
