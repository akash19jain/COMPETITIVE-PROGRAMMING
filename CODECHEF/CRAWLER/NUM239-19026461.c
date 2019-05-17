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
            r=i;
            if(r==2 || r==3 ||r==9)
            count++;
        }
        printf("%d\n",count);
    }
	return 0;
}