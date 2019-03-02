https://www.codechef.com/LTIME61B/problems/NUM239/

#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        
        int count=0;
        int r=0;
        for(int i=a;i<=b;i++)
        {
            r=i%10;
            if(r==2 || r==3 ||r==9)
            count++;
        }
        printf("%d\n",count);
    }
	return 0;
}

