/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:13/10/2019 
*/
// #include<algorithm>
// #include <bits/stdc++.h>
// using namespace std;
 
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#define SC1(x)          scanf("%lld",&x)
#define SC2(x,y)        scanf("%lld%lld",&x,&y)
#define SC3(x,y,z)      scanf("%lld%lld%lld",&x,&y,&z)
#define SCS(x)          scanf("\n%s", x)
#define PF1(x)          printf("%lld\n",x)
#define PF2(x,y)        printf("%lld %lld\n",x,y)
#define PF3(x,y,z)      printf("%lld %lld %lld\n",x,y,z)
#define PFN                printf("\n")
#define REP(i,n)        for(long long i=0;i<(n);i++)
#define FOR(i,a,b)      for(long long i=(a);i<=(b);i++)
#define FORD(i,a,b)     for(long long i=(a);i>=(b);i--)
#define WHILE(n)        while(n--)
#define MEM(a, b)       memset(a, (b), sizeof(a))
#define ITOC(c)         ((char)(((ll)'0')+c))
#define MID(s,e)        (s+(e-s)/2)
#define SZ(a)            strlen(a)
#define MOD             1000000007
#define MAX             10000000005
#define MIN             -10000000005
#define PI              3.1415926535897932384626433832795
#define DEB(x)          printf("The value of \"%s\" is: %d\n",#x,x)
#define CASES           ll t;SC1(t);while(t--)
#define ABS(a)          ((a>0)?a:-(a))
#define SWAP(a,b)        ll z=a;a=b;b=z
#define SWAPC(a,b)        char z=a;a=b;b=z
 
const int INF = 1<<29;
typedef long long ll;
typedef unsigned long long ull;
#define FILEIO(name) \  freopen(name".in", "r", stdin); \   freopen(name".out", "w", stdout);
int cmp(const void * a,const void * b);
long long maxv(long long a,long long b);
long long minv(long long a,long long b);
long long gcd(long long u,long long v);
long long digits(long long n);
bool isPoweroftwo(long long n);
bool prime[1000005]; 
int main()
{
    ll n;
    SC1(n);
    ll c[8],x;
    MEM(c,0);
    REP(i,n)
    {
        SC1(x);
        if(x==5 || x==7)
        {
            printf("-1\n");
            return 0;
        }
        c[x]++;
    }
        ll z=c[4];
        ll m1=minv(c[1],c[2]);
        m1=minv(m1,z);
        if(m1!=z)
        {
            printf("-1\n");
            return 0;
        }
        ll ans[n][3],ii;
        for(ii=0;ii<z;ii++)
        {
            ans[ii][0]=1;ans[ii][1]=2;ans[ii][2]=4;
        }
        //DEB(z);
        c[1]-=z;
        c[2]-=z;
        c[4]=0;
        z=c[3];
        m1=minv(c[1],c[6]);
        m1=minv(m1,z);
        if(m1!=z)
        {
            printf("-1\n");
            return 0;
        }
        for(;ii<z+ii;ii++)
        {
            ans[ii][0]=1;ans[ii][1]=3;ans[ii][2]=6;
        }
        c[1]-=z;
        c[6]-=z;
        c[3]=0;
        //DEB(c[1]);
        //DEB(c[2]);
        //DEB(c[6]);
        if(c[1]!=c[2] || c[1]!=c[6])
        {
            printf("-1\n");
            return 0;
        }
        for(ll j=0;j<ii;j++)
        {
            PF3(ans[j][0],ans[j][1],ans[j][2]);
        }
        REP(i,c[1])
        {
            printf("1 2 6\n"); 
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
long long digits(long long n)    //to calculate no of digits in a number
{
    return floor(log10(n))+1;
}
bool isPoweroftwo(long long x)
{
    return x && (!(x&(x-1)));
}