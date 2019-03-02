https://www.codechef.com/KGP18ROL/problems/PLAYPIAN/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        char str[103];
        scanf("%s", str);
        int flag=0;
        for(int i=0;str[i]!='\0';i=i+2)\
        {
            if((str[i]=='A'&&str[i+1]=='B')||(str[i+1]=='A'&&str[i]=='B'))
            flag=0;
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        printf("no\n");
        else
        printf("yes\n");
    }

    return 0;
}
