//PARTIALLY SOLVED
/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:21/09/2019 
*/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define SC1(x)          scanf("%lld",&x)
#define SC2(x,y)        scanf("%lld%lld",&x,&y)
#define SC3(x,y,z)      scanf("%lld%lld%lld",&x,&y,&z)
#define SCS(x)          scanf("\n%s", x)
#define PF1(x)          printf("%lld\n",x)
#define PF2(x,y)        printf("%lld %lld\n",x,y)
#define PF3(x,y,z)      printf("%lld %lld %lld\n",x,y,z)
#define REP(i,n)        for(long long i=0;i<(n);i++)
#define FOR(i,a,b)      for(long long i=(a);i<=(b);i++)
#define FORD(i,a,b)     for(long long i=(a);i>=(b);i--)
#define WHILE(n)        while(n--)
#define MEM(a, b)       memset(a, (b), sizeof(a))
#define ITOC(c)         ((char)(((int)'0')+c))
#define MID(s,e)        (s+(e-s)/2)
#define SZ(a)            strlen(a)
#define MOD             1000000007
#define MAX             10000000005
#define MIN             -10000000005
#define PI              3.1415926535897932384626433832795
#define DEB(x)          printf("The value of \"%s\" is: %d\n",#x,x)
#define CASES           ll t;SC1(t);while(t--)
#define ABS(a)          ((a>0)?a:-(a))
 
const int INF = 1<<29;
typedef long long ll;
typedef unsigned long long ull;
#define FILEIO(name) \  freopen(name".in", "r", stdin); \   freopen(name".out", "w", stdout);
int cmp(const void * a,const void * b);
long long maxv(long long a,long long b);
long long minv(long long a,long long b);
long long gcd(long long u,long long v);

int main()
{
    ll tree[1000005];
    REP(i,1000003)
        tree[i]=1;
    tree[0]=0;
    ll max[1000003][3];
    MEM(max,0);
    ll m=0,pos=0;
    REP(i,1000003)
    {
        if(i==0)
            continue;
        ll z=(i&(i-1));
        tree[i]+=tree[z];
        if(tree[i]>m)
        {
            m=tree[i];
            pos=i;
        }
        max[i][0]=m;
        max[i][1]=pos;
    }
    m=0,pos=0;
    REP(i,1000003)
    {
        if(i==0)
            continue;
        if(tree[i]>m && max[i][1]!=i)
        {
            m=tree[i];
            pos=i;
        }
        max[i][2]=m;
    }
    CASES
    {
        ll n;
        SC1(n);
        ll ans=max[n][0]+max[n][2];
        PF1(ans);
    }
    return 0;
}
 
 
//qsort(arr,n,sizeof(arr[0]),cmp);
int cmp (const void * a, const void * b)
{
    if( *(ll*)a - *(ll*)b < 0 ) return -1;
    if( *(ll*)a - *(ll*)b > 0 ) return 1;
        return 0;
}
long long maxv(long long a,long long b)
{
    if(a>b) return a;
        return b;
}
long long minv(long long a,long long b)
{
    if(a<b) return a;
        return b;
}
long long gcd(long long u,long long v)
{
    if (v == 0) return u; 
       return gcd(v, u%v);
}
