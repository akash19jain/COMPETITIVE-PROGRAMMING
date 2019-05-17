/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:25/04/2019 
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
        char str[100005];
        scanf("%s", str);
        int f=0;
        long long l=strlen(str);
        for(long long i=0;i<l;i++)
        {
            if(str[i]=='1' && f==0)
                f=1;
            if(str[i]=='0' && f==1)
                f=2;
            if(str[i]=='1' && f==2)
            {
                f=3;
                break;
            }
        }
         if(f==3 || f==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}