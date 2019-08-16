/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:04/08/2019 
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

ll solve(char str[],ll ini,ll len)
{
    int f=1;
    ll c=0;
    ll c1=0,c2=0;
    REP(i,len)
    {
        if(str[i]=='0')
            c2++;
        else
        {
            c1++;
        }
        
    }
    if(c1%2==0 && c2%2==0)
        return (f-1);
    if(c1%2==0 && c2%2!=0)
        return (f-1);
    return f;
    /*FOR(i,ini,len-1)
    {
        if(str[i]=='1')
            continue;
        else
        {
            f=0;
            c++;
        }
        
    }
    if(f==0)
        return 0;
    else
    {
        FOR(i,ini,len-1)
        {
            if(str[i]=='1')
            {
                ll z=solve(str,0,i) && solve(str,i+1,len-1-i);
            }
        }
    }*/
}
int main()
{
    CASES
    {
        char str[100005];
        SCS(str);
        ll len=SZ(str);
        ll ans=solve(str,0,len);
        if(ans==1)
            printf("WIN\n");
        else
            printf("LOSE\n");
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