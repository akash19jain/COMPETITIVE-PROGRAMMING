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
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long arr[n][2],a,b;
        for(long long i=0;i<n;i++)
        {
            scanf("%lld%lld",&arr[i][0],&arr[i][1]);
        }
        scanf("%lld%lld",&a,&b);
        int f=0;
        for(long long i=0;i<n;i++)
        {
            if(pow((arr[i][0]-a),2)+pow((arr[i][1]-b),2)==5)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            printf("YES\n");
        else    
            printf("NO\n");
    }
    return 0;
}