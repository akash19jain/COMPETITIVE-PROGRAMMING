/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:26/04/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t=1;
    scanf("%lld\n",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        char str[n+5];
        scanf("\n%s", str);
        int h=0,t=0,f=0;
        for(long long i=0;i<n;i++)
        {
            if(str[i]=='H')
                h++;
            if(h>1)
            {
                f=1;
                break;
            }
            if(str[i]=='T')
                t++;
            if(t>=1 && h==0)
            {
                f=1;
                break;
            }
            if(t>1)
            {
                f=1;
                break;
            }
            if(str[i]=='T')
            {
                h=0;
                t=0;
            }
        }
        
        if(f==0 && (h>=1||t>=1))
            f=1;
        if(f==0)
            printf("Valid\n");
        else
            printf("Invalid\n");
    }
    return 0;
}