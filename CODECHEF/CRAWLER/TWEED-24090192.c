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
        long long n,f=0;
        scanf("%lld",&n);
        char str[5];
        scanf("%s\n", str);
        if(str[1]=='e')
            f=0;
        else
            f=1;
        long long arr[n];
        for(long long i=0;i<n;i++)
            scanf("%lld",&arr[i]);
        if(n==1 && f==0 && arr[0]%2==0)
            printf("Dee\n");
        else
            printf("Dum\n");
        
    }
    return 0;
}