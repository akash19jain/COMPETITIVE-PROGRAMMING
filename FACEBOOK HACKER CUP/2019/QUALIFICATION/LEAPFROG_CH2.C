/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:17/06/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    int j=1;
    int t=1;
    scanf("%d",&t);
    while(t--)
    {
        char str[5005];
        scanf("%s", str);
        int l=strlen(str);
        int b=0,a=0;
        for(int i=0;i<l;i++)
        {
            if(str[i]=='.')
                a++;
            if(str[i]=='B')
                b++;
        }
        
        if(a==0)
        {
           // printf("A");
            printf("Case #%d: N\n",j);
            j++;
            continue;
        }
        else if(b>=a)
        {
            printf("Case #%d: Y\n",j);
            j++;
            continue;
        }
        
        else if(b>=2)
        {
            printf("Case #%d: Y\n",j);
            j++;
            continue;
        }
        else
        {
            printf("Case #%d: N\n",j);
        }
        j++;
    }
    return 0;
}
