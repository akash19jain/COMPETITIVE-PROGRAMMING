https://www.codechef.com/CYAU2018/problems/LRPRINT/

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[101];
        char str1[101];
        scanf("%s",str);
        int j=0;
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                str1[j]=str[i];
                j++;
            }
            
        }
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                str1[j]=str[i];
                j++;
            }
            
        }
        str1[j++]='\0';
        printf("%s\n",str1);
    }
}
