/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:17/05/2019 
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
        int count[27];
        memset(count,0,sizeof(count));
        scanf("%s", str);
        int l=strlen(str);
        int f=0;
        for(int i=0;i<l;i++)
        {
            int x=str[i]-'0';
            x=x-49;
            count[x]++;
            
            
            if(i==l-1)
                break;
            if(str[i]!=str[i+1])
            {
                f=1;
            }
        }
        if(f==0)
        printf("-1");
        else
        {
            for(int i=0;i<26;i++)
            {
                for(int j=0;j<count[i];j++)
                {
                    int x=i+49;
                    char x1=x+'0';
                    printf("%c",x1);
                }
            }
        }
        printf("\n");
    }
    return 0;
}