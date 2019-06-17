https://www.codechef.com/LTIME71B/problems/ATTND/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:27/04/2019 
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
        scanf("%lld\n",&n);
        char first[n][15],second[n][15];
        int c[n];
        memset(c,0,sizeof(c));
        for(long long i=0;i<n;i++)
        {
            scanf("%s", first[i]);
            scanf("%s\n", second[i]);
        }
        for(long long i=0;i<n;i++)
        {
            for(long long j=i+1;j<n;j++)
            {
                if(strcmp(first[i],first[j])==0)
                {
                    c[i]=1;
                    c[j]=1;
                }
            }
        }
        for(long long i=0;i<n;i++)
        {
            printf("%s",first[i]);
            if(c[i]==1)
                printf(" %s",second[i]);
            printf("\n");
        }
    }
    return 0;
}
