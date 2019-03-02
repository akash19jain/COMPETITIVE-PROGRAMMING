https://www.codechef.com/LTIME64B/problems/MATCH2/

#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n,q;
        scanf("%lld%lld",&n,&q);
        long long a[n];
        long long b[n];
        long long same=0;
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&b[i]);
            if(a[i]==b[i])
            same++;
        }
        //printf("%lld\n",same);
        while(q--)
        {
            
            long long x,y,z;
            scanf("%lld%lld%lld",&x,&y,&z);
            long long l=x^same;
            long long r=y^same;
            long long c=z^same;
            same=0;
            for(long long i=l-1;i<r;i++)
            {
                a[i]=c;
            }
           // printf("%lld %lld %lld\n",l,r,c);
        
            for(long long i=0;i<n;i++)
            {
                if(a[i]==b[i])
                same++;
            }
            
            printf("%lld\n",same);
        }
     
    }
}
