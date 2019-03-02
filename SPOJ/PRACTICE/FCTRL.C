https://www.spoj.com/problems/FCTRL/

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
        unsigned long long n,c=0;;
        scanf("%llu",&n);
        for(long long i=1;;i++)
        {
            if(pow(5,i)<=n)
            {
                c+=n/pow(5,i);
            }
            else
            break;
        }
        
        printf("%llu\n",c);
        
    }
    
    
    return 0;
} 
