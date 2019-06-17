/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:15/06/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    int j=1;
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
        char str[5005];
        scanf("\n%s", str);
        
        int l=strlen(str);
        int b=0,a=0;
        for(int i=0;i<l;i++)
        {
            if(str[i]=='A')
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
        if(a+b==l)
        {
            printf("Case #%d: N\n",j);
            j++;
            continue;
        }
        l=l-1;
        int c=(l+2-1)/2;
        if(b<c)
        {
            printf("Case #%d: N\n",j);
            j++;
            continue;
        }
        else
        {
            printf("Case #%d: Y\n",j);
        }
        j++;
    }
    return 0;
}
