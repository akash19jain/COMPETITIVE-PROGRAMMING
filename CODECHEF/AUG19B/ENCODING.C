//  PARTIAL SOLUTION FOR 10 POINTS
/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:07/08/2019 
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

ll solve(long long a,long long max)
{
    ll ans=0;
    char s1[max+5];
    sprintf(s1,"%lld",a);
    //printf("%s\n",s1);
    ll len=SZ(s1);
    //DEB(len);
    FORD(i,len-1,1)
    {
        if(s1[i]!=s1[i-1])
        {
            ll power=1;
            ll times=len-1-i;
            FOR(j,1,times)
            {
                power=power%MOD;
                power=power*10;
            }
            power=power%MOD;
            ll x=s1[i]-48;
            ans+=(x*power);
            ans=ans%MOD;
        }
    }
    ll power=1;
    FOR(j,1,len-1)
    {
        power=power%MOD;
        power=power*10;
    }
    power=power%MOD;
    ll x=s1[0]-48;
    ans+=(x*power);
    ans=ans%MOD;
    
    return ans;
}
int main()
{
    CASES
    {
        ll nl,nr,l,r;
        SC1(nl);
        SC1(l);
        SC2(nr,r);
        /*char l[nl+5];
        SCS(l);
        printf("%s\n",l);
        SC1(nr);
        char r[nr+5];
        SCS(r);
        ll l1=atoi(l);
        ll r1=atoi(r);*/
        ll max=maxv(nl,nr);
        ll ans=0;
        FOR(i,l,r)
        {
            ll z=solve(i,max);
            //DEB(z);
            ans+=z;
            ans=ans%MOD;
        }
        PF1(ans);
    }
    
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