/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:29/01/2019
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007

int main()
{
    long long n,m,i,j,f=0;
    scanf("%lld%lld\n",&n,&m);
    char str[n+2][m+2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%c ",&str[i][j]);
            if(str[i][j]!='B' && str[i][j]!='W' && str[i][j]!='G')
            {
                f=1;
                //printf("%lld %lld ",i,j);
                //printf("%c= ",str[i][j]);
            }
        }
    }
    if(f==0)
    printf("#Black&White");
    else
    printf("#Color");
    return 0;
}