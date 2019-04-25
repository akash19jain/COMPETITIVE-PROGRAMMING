https://www.codechef.com/COME2019/problems/MAX2/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:13/04/2019 
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
        long long n,c=0;
        scanf("%lld\n",&n);
        char str[n+5];
        scanf("%s", str);
        for(long long i=n-1;i>=0;i--)
        {
            if(str[i]=='1')
                break;
            c++;
        }
        printf("%lld\n",c);
    }
    return 0;
}
