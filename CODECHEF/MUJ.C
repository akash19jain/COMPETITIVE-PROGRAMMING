https://www.codechef.com/CPN12019/problems/MUJ/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:26/02/2019 
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
        char str[1005];
        scanf("%s", str);
        int l=strlen(str),f=0;
        for(int i=0;i<l-2;i++)
        {
            if(str[i]=='M' && str[i+1]=='U' && str[i+2]=='J')
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
