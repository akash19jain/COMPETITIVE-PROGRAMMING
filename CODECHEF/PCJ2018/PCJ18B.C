https://www.codechef.com/PCJ2018/problems/PCJ18B/

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int c=1,sum=0;
        for(int i=n;i>=1;i--)
        {
            if(i%2!=0)
            {
                sum+=(c*c);
            }
            c++;
        }
        printf("%d\n",sum);
        
    }
}
