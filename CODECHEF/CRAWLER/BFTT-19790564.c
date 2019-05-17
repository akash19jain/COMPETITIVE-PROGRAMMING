#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        for(long long i=n+1;;i++)
        {
            int count=0;
            long long x=i;
            while(x>0)
            {
                int r=x;
                if(r==3)
                count++;
                x=x/10;
                if(count==3)
                break;
            }
            if(count==3)
            {
                printf("%lld\n",i);
                break;
            }
        }
    }
}