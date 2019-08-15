/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:31/01/2019
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007

int main()
{
    long long n,f=0;
    scanf("%lld",&n);
    if(n%2==0)
    {
        f=n/2;
        printf("%lld\n",f);
        for(int i=0;i<f;i++)
            printf("2 ");
    }
    else
    {
        f=n/2;
        printf("%lld\n",f);
        for(int i=0;i<f-1;i++)
            printf("2 ");
        printf("3 ");
    }
    return 0;
}