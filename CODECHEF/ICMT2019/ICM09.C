https://www.codechef.com/ICMT2019/problems/ICM09/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:08/03/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,z=0,o=0,i,ans=0;
        scanf("%lld\n",&n);
        char str[n+1];
        scanf("%s", str);
        for(i=0;i<n;i++)
        {
            if(str[i]=='0')
                z++;
            else
                o++;
                
            if(o<z)
            {
                ans++;
                o++;
                z--;
            }
        }
            
        printf("%lld\n",ans);
    }
    return 0;
}
