/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:31/03/2019 
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
       long long n;
       scanf("%lld",&n);
       if(n%2==0)
        printf("0");
        else
        printf("1");
    }
    
    return 0;
}