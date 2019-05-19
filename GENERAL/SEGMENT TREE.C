/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:18/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAXN 10000
long long t[4*MAXN];

long long min(long long a,long long b)
{
    if(a<b)
        return a;
    else
        return b;
}
long long max(long long a,long long b)
{
    if(a>b)
        return a;
    else
        return b;
}
void build(long long a[],long long v,long long tl,long long tr)
{
    if(tl==tr)
        t[v]=a[tl];
    else
    {
        long long tm=(tl+tr)/2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = t[v*2] + t[v*2+1];
    }
    //printf("%lld %lld\n",v,t[v]);
}
long long sum(long long v, long long tl, long long tr, long long l, long long r)
{
    if (l > r) 
        return 0;
        
    if (l == tl && r == tr)
        return t[v];
        
    long long tm = (tl + tr) / 2;
    return sum(v*2, tl, tm, l, min(r, tm))
           + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
}
void update(int v, int tl, int tr, int pos, int new_val) 
{
    if (tl == tr) {
        t[v] = new_val;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        t[v] = t[v*2] + t[v*2+1];
    }
}
int main()
{
   // printf("RUNNING\n");
    long long t=1;
    scanf("%lld\n",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long arr[n];
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        build(arr,1,0,n-1);
        
        long long q;
        scanf("%lld",&q);
        while(q--)
        {
            long long l,r;
            scanf("%lld%lld",&l,&r);
            l--;
            r--;
            long long ans=sum(1,0,n-1,l,r);
            printf("%lld\n",ans);
        }
        long long u;
        scanf("%lld",&u);
        while(u--)
        {
            long long l,r;
            scanf("%lld%lld",&l,&r);
            l--;
            update(1,0,n-1,l,r);
        }
        q;
        scanf("%lld",&q);
        while(q--)
        {
            long long l,r;
            scanf("%lld%lld",&l,&r);
            l--;
            r--;
            long long ans=sum(1,0,n-1,l,r);
            printf("%lld\n",ans);
        }
    }
    return 0;
}
