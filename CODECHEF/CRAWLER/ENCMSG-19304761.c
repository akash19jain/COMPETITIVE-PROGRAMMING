#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char a[n];
        scanf("%s",a);
        
        for(int i=0;i<n-1;i=i+2)
        {
            char ch=a[i];
            a[i]=a[i+1];
            a[i+1]=ch;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]=='a')
            a[i]='z';
            else if(a[i]=='b')
            a[i]='y';
            else if(a[i]=='c')
            a[i]='x';
            else if(a[i]=='d')
            a[i]='w';
            else if(a[i]=='e')
            a[i]='v';
            else if(a[i]=='f')
            a[i]='u';
            else if(a[i]=='g')
            a[i]='t';
            else if(a[i]=='h')
            a[i]='s';
            else if(a[i]=='i')
            a[i]='r';
            else if(a[i]=='j')
            a[i]='q';
            else if(a[i]=='k')
            a[i]='p';
            else if(a[i]=='l')
            a[i]='o';
            else if(a[i]=='m')
            a[i]='n';
            else if(a[i]=='n')
            a[i]='m';
            else if(a[i]=='o')
            a[i]='l';
            else if(a[i]=='p')
            a[i]='k';
            else if(a[i]=='q')
            a[i]='j';
            else if(a[i]=='r')
            a[i]='i';
            else if(a[i]=='s')
            a[i]='h';
            else if(a[i]=='t')
            a[i]='g';
            else if(a[i]=='u')
            a[i]='f';
            else if(a[i]=='v')
            a[i]='e';
            else if(a[i]=='w')
            a[i]='d';
            else if(a[i]=='x')
            a[i]='c';
            else if(a[i]=='y')
            a[i]='b';
            else
            a[i]='a';
        }
        printf("%s\n",a);
        
    }
    return 0;
}