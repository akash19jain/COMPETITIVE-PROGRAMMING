https://www.codechef.com/COON2019/problems/CDRN01/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:09/04/2019 
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
        long long b;
        scanf("%lld",&b);
        int r=ceil(b/10.0);
        if(r%10==0)
            r++;
            
        printf("%d\n",r*10);
    }
    return 0;
}
