https://www.codechef.com/ISCC2018/problems/T21/

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[100000];
        char b[100000];
        scanf("%s",a);
        scanf("%s",b);
        
        int sa=0,sb=0;
        for(int i=0;a[i]!='\0';i++)
        sa=sa+a[i];
        
        
        for(int i=0;b[i]!='\0';i++)
        sb=sb+b[i];
        
        int saa=sa%3;
        int sbb=sb%3;
        
        if(saa==0 || sbb==0)
        printf("0\n");
        
        else if(saa==1 && sbb==1)
        printf("1\n");
        
        else if((saa==1 && sbb==2) || (saa==2 && sbb==1))
        printf("2\n");
        
        else
        printf("1\n");
        
    }
    return 0;
}
