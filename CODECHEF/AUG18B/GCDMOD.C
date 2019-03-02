https://www.codechef.com/AUG18B/problems/GCDMOD/

#include<stdio.h>
#include<math.h>
#define MAX 1000000007
int fgcd(long long u,long long v)
{
    if (v == 0)
       return u; 
    else
       return fgcd(v, u%v);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b,n;
        scanf("%lld%lld%lld",&a,&b,&n);
        
        long long d=0;
        d=abs(a-b);
        long long y=pow(a,n);
        long long z=pow(b,n);
        long long x=y+z;
        //long long gcd=1;
        long long gcd=fgcd(x,d);
       
 
        
        
        gcd=gcd%MAX;
        printf("%lld\n",gcd);
        
    }
}  
