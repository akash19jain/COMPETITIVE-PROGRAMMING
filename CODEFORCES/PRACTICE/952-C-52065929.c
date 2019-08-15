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
        long long arr[n],f=0;
        scanf("%lld",&arr[0]);
        for(long long i=1;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            if((arr[i]-arr[i-1])>1 || (arr[i]-arr[i-1])<-1)
            {
                f=1;
            }
        }
        if(f==1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    
    return 0;
}