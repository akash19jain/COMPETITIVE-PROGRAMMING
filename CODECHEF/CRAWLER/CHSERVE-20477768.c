#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long p1,p2,k;
        scanf("%lld%lld%lld",&p1,&p2,&k);
        
        long long sum=(p1+p2)/k;
        int sum1=sum%2;
        
        if(sum1==1)
        printf("COOK\n");
        else
        printf("CHEF\n");
        
    }
    return 0;
}