https://www.codechef.com/DEC18A/problems/CHFINTRO/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    long long n,r;
    scanf("%lld%lld",&n,&r);
    while(n--)
    {
        long long x;
        scanf("%lld",&x);
        if(x<r)
        printf("Bad boi\n");
        else
        printf("Good boi\n");
    }
    
    return 0;
}
