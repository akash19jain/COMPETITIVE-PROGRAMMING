https://www.spoj.com/problems/TEST/

#include<stdio.h>
int main()
{
    int i=0;
    while(i>=0)
    {
        int x;
        scanf("%d",&x);
        if(x==42)
        break;
        else
        printf("%d\n",x);
    }
} 
