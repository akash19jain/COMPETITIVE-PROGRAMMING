/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:21/09/2019 
*/
/*#include<algorithm>
#include <bits/stdc++.h>
using namespace std;*/
 
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
    ll n;
    SC1(n);
    ll ze=0,o=1;
    ll arr[n],ans=0;
    char str[n+5];
    SCS(str);
    ll count[11];
    MEM(count,0);
    REP(i,n)
    {
        int x=str[i]-'0';
        arr[i]=x*o;
        count[arr[i]]++;
    }
    ll pos[10],a=0;
    MEM(pos,0);
    REP(i,10)
    {
        if(count[i]%2==1)
        {
            pos[a++]=i*o;
            //PF1(i);
        }
    }
    if(a*o==ze)
        ans=-1;
    else if(a*o==1)
        ans=0;
    else if(a*o==n*o)
        ans=n;
    else
    {
        ll f=-1,last;
        ll a1[11];
        ll b1[11];
        MEM(a1,0);
        MEM(b1,0);
        REP(i,n)
        {
            REP(j,a)
            {
                if((str[i]-'0')==pos[j])
                    b1[pos[j]]=i*o;
                if((str[i]-'0')==pos[j])
                    a1[pos[j]]++;
                
            }
            ll p=0;
            REP(j,10)
            {
                if(a1[j]!=0)
                    p++;
            }
            if(p*o==a*o)
            {
                last=i*o;
                break;
            }
        }
        f=n;
        f++;
        f++;
        REP(j,10)
        {
            f=minv(b1[j],f);
        }
        ans=last-f;
    }
    PF1(ans);
    

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

