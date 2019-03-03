https://www.codechef.com/problems/CR194

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:03/03/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
        long long l;
        scanf("%lld\n",&l);
        char str[l+5];
        scanf("%s",str);
        long long c=0;
        for(long long i=0;i<l;i++)
        {
            if(str[i]=='c' && c==0)
                c=1;
            else if(str[i]=='o' && c==1)
                c=2;
            else if(str[i]=='d' && c==2)
                c=3;
            else if(str[i]=='e' && c==3)
                c=4;
            else if(str[i]=='r' && c==4)
                c=5;
            else if(str[i]=='e' && c==5)
                c=6;
            else if(str[i]=='d' && c==6)
            {
                c=7;
                break;
            }
        }
        if(c==7)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
