https://www.codechef.com/CYSE2018/problems/CYSEP01/

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[1001];
        scanf("%s", str);
        for(int i=0;str[i]!='\0';i++)
        {
            char ch=str[i];
            int a=ch;
            //printf("%d\n",a);
            
            a-=(122-ch);
            a=a%26;
            a=a+96;
            if(a==96)
            a=122;
            ch=(char)a;
            str[i]=ch;
        }
        printf("%s\n",str);
    }
}
