/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:19/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAXN 100005
long long t[4*MAXN]={0};
 
long long min(long long a,long long b)
{
    if(a<b)
        return a;
    else
        return b;
}
 
void build(long long a[],long long v,long long tl,long long tr)
{
    if(tl==tr)
    {
        t[v]=a[tl];
        return;
    }
    else
    {
        long long tm = (tl+tr)/2;
        build(a,v*2,tl,tm);
        build(a,v*2+1,tm+1,tr);
	    t[v]=min(t[v*2],t[v*2+1]);
    }
    //printf("%lld %lld\n",v,t[v]);
}
long long sum(long long v, long long tl, long long tr, long long l, long long r)
{
    
    if(r<tl || l>tr)
        return 1000000;
    if(l<=tl && tr<=r)
        return t[v];
     
    long long tm = (tl+tr) / 2;
    long long left=sum(v*2,tl,tm,l,r);
    long long right=sum(v*2+1,tm+1,tr,l,r);
    return min(left,right);
}
void update(long long v,long long tl,long long tr,long long p,long long val)
{
    if(tl==tr)
    {
        t[v]=val;
        return;
    }
    long long tm=(tl+tr)/2;
    if(p<=tm)
        update(v*2,tl,tm,p,val);
    else
        update(v*2+1,tm+1,tr,p,val);
    
    t[v]=min(t[v*2],t[v*2+1]);
    
}
int main()
{
    //printf("RUNNING\n");
    long long te=1;
    //scanf("%lld\n",&te);
    while(te--)
    {
        memset(t,0,sizeof(t));
        long long n;
        scanf("%lld",&n);
        long long q;
        scanf("%lld",&q);
        long long arr[n+1];
        for(long long i=1;i<=n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        build(arr,1,1,n);
        /*for(long long i=1;i<4*n;i++)
            printf("%lld ",t[i]);
        printf("\n");*/
        
        long long l,r,ans=0;
        char ch;
        while(q--)
        {
            scanf("\n%c",&ch);
            scanf("%lld%lld",&l,&r);
            //printf("%c ",ch);
            if(ch=='q')
            {
                ans=sum(1,1,n,l,r);
                printf("%lld\n",ans);
            }
            else
            {
                update(1,1,n,l,r);
            }
        }
    }
    return 0;
} 
