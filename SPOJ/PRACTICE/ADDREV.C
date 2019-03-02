https://www.spoj.com/problems/ADDREV/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:24/12/2018    
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
        unsigned long long n1,n2,sum=0;
        scanf("%llu%llu",&n1,&n2);
        while(n1>0)
        {
            int r=n1%10;
            sum=sum*10+r;
            n1=n1/10;
        }
        n1=sum;
        sum=0;
        while(n2>0)
        {
            int r=n2%10;
            sum=sum*10+r;
            n2=n2/10;
        }
        n2=sum;
        n1=n1+n2;
        sum=0;
        while(n1>0)
        {
            int r=n1%10;
            sum=sum*10+r;
            n1=n1/10;
        }
        n1=sum;
        printf("%llu\n",n1);
        
    }
    
    
    return 0;
} 
