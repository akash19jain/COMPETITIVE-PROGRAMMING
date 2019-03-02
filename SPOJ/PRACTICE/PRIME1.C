https://www.spoj.com/problems/PRIME1/

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b;
        scanf("%lld%lld",&a,&b);
        if(a==1)
        a++;
        if(a<=2)
        printf("2\n");
        if(a%2==0)
        a++;
        if(a<=2)
        printf("2\n");
        for(long long i=a;i<=b;i=i+2)
        {
            int c=0;
            for(long long j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
            printf("%lld\n",i);
        }
        printf("\n");
    }
} 
