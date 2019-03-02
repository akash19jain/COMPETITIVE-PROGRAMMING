https://www.codechef.com/LTIME64B/problems/JDELAY/

#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int c=0;
        while(n--)
        {
            int s,j;
            scanf("%d%d",&s,&j);
            if((j-s)>5)
            c++;
        }
        
        printf("%d\n",c);
     
    }
}
