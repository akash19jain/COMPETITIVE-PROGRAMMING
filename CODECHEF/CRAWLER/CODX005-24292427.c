/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:17/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
char s1[100005],s2[100005];
long long d1[100005],d2[100005];
int main()
{
    long long t=1;
    //scanf("%lld\n",&t);
    while(t--)
    {
        long long n,ans=0;
        scanf("%lld\n",&n);
        char str[n+5];
        scanf("%s", str);
        for(long long i=0;i<n;i++)
        {
            if(i==n-1)
            {
                ans++;
                break;
            }
            if(str[i]=='R'&&str[i+1]=='U')
            {
                i++;
            }
            else if(str[i+1]=='R'&&str[i]=='U')
            {
                i++;
            }
            ans++;
        }
        printf("%lld\n",ans);
    }
    return 0;
}