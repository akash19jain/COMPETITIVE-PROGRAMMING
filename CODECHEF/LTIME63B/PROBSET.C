https://www.codechef.com/LTIME63B/problems/PROBSET/

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,x=3,y=0;
        scanf("%d%d",&n,&m);
        while(n--)
        {
            char str1[10],a[m];
            scanf("%s%s",&str1,&a);
            //printf("%s ",str1);
            if(str1[0]=='c')
            {
                for(int j=0;a[j]!='\0';j++)
                {
                    if(a[j]=='0')
                    {
                        x=1,y=1;
                        break;
                    }
                }
            }
            else if(str1[0]=='w')
            {
                int c=0;
                for(int j=0;a[j]!='\0';j++)
                {
                    if(a[j]=='1')
                    {
                        c++;
                    }
                }
                if(c==m && y==0)
                {
                    x=2;
                }
            }
        }
        if(x==1)
        printf("INVALID\n");
        else if(x==2)
        printf("WEAK\n");
        else
        printf("FINE\n");
    }
    return 0;
}
