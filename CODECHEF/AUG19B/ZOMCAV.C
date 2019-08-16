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


int main()
{
    CASES
    {
        ll n,x,y;
        SC1(n);
        ll c[n],h[n],arr[n+1];
        REP(i,n)
            SC1(c[i]);
        
        REP(i,n)
            SC1(h[i]);

        qsort(h,n,sizeof(arr[0]),cmp);
        
        x=0,y=n-1;
        arr[0]=c[0];
        REP(i,n-1)
            arr[i+1]=c[i+1]-c[i];
        
        arr[n]=0;
        REP(i,n)
        {
            if(c[i]+i>n-1)
                y=n-1;
            else
            {
                y=c[i]+i;
            }

            if(c[i]-i>=0)
                x=0;
            else
            {
                x=i-c[i];
            }
            //DEB(x);
            //DEB(y);
            arr[x]++;
            arr[y+1]--;
            x=0;
            y=n-1;
            //DEB(arr[x]);
        }
        //DEB(arr[0]);

        ll ans[n],a=0;
        ans[a++]=arr[0];
        ll ans1[n];
        ans1[0]=ans[0]-c[0];
        FOR(i,1,n-1)
        {
            ans[i]=arr[i]+ans[i-1];
            ans1[i]=ans[i]-c[i];
        }

        qsort(ans1,n,sizeof(arr[0]),cmp);

        int f=0;
        REP(i,n)
        {
            if(h[i]!=ans1[i])
            {
                f=1;
                break;
            }
        }
        if(f==1)
            printf("NO\n");
        else
        {
            printf("YES\n");
        }
        
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