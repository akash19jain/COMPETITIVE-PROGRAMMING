/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:18/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAXN 100005
int t[4*MAXN]={0};
 
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
 
void build(int a[],int v,int tl,int tr)
{
    if(tl==tr)
    {
        t[v]=a[tl];
        return;
    }
    else
    {
        int tm = (tl+tr)/2;
        build(a,v*2,tl,tm);
        build(a,v*2+1,tm+1,tr);
	    t[v]=min(t[v*2],t[v*2+1]);
    }
    //printf("%lld %lld\n",v,t[v]);
}
int sum(int v, int tl, int tr, int l, int r)
{
    
    if(r<tl || l>tr)
        return 1000000000;
    if(l<=tl && tr<=r)
        return t[v];
     
    int tm = (tl+tr) / 2;
    int left=sum(v*2,tl,tm,l,r);
    int right=sum(v*2+1,tm+1,tr,l,r);
    return min(left,right);
}
int main()
{
    //printf("RUNNING\n");
    int te=1;
    //scanf("%lld\n",&te);
    while(te--)
    {
        memset(t,0,sizeof(t));
        int n;
        scanf("%d",&n);
        int arr[n+1];
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        build(arr,1,1,n);
        /*for(int i=1;i<4*n;i++)
            printf("%lld ",t[i]);
        printf("\n");*/
        int q;

        scanf("%d",&q);
        while(q--)
        {
            int l,r;
            scanf("%d%d",&l,&r);
            l++;
            r++;
            int ans=sum(1,1,n,l,r);
            printf("%d\n",ans);
        }
    }
    return 0;
} 
