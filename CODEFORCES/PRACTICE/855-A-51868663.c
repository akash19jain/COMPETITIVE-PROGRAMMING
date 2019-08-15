/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:26/03/2019 
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
        char str[n][105];
        for(int i=0;i<n;i++)
        {
            scanf("%s",str[i]);
            int f=0;
            for(int j=0;j<i;j++)
            {
                if(strcmp(str[i],str[j])==0)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
                printf("NO\n");
            else
                printf("YES\n");
        }
    }
    return 0;
}