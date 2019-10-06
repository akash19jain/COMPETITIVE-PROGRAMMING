/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:05/10/2019 
*/
/*#include<algorithm>
#include <bits/stdc++.h>
using namespace std;*/
 
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

int main()
{
    CASES
    {
        ll n,q;
        SC2(n,q);
        char str[n+5];
        SCS(str);
        ll add[n+1];
        ll mul[n+1];
        add[0]=0;
        mul[0]=0;
        ll y=0;
        if(str[0]=='E')
        {
            add[1]=2;
            mul[1]=0;
        }
        else 
        {
            add[1]=1;
            mul[1]=1;
            y++;
        }
        //DEB(mul[0]);
        //DEB(mul[1]);
        FOR(i,1,n-1)
        {
            ll x;
            if(str[i]=='E')
            {
                x=2;
                mul[i+1]=y;
            }
            else
            {
                x=1;
                //y=3;
                mul[i+1]=++y;
            }
            add[i+1]=(add[i]+x);
            if(add[i+1]%2==0)
                add[i+1]=2;
            else
                add[i+1]=1;
            //mul[i+1]=(mul[i]*y);
            

            //DEB(mul[i+1]);
        }
        while(--q>=0)
        {
            ll a,b,c;
            SC3(a,b,c);
            if(a==1)
            {
                ll z=add[c]+add[b-1];
                if(z%2==0)
                    printf("E\n");
                else
                    printf("O\n");
            }
            if(a==2)
            {
                ll z=mul[c]-mul[b-1];
                if(z==(c-b+1))
                    printf("O\n");
                else
                    printf("E\n");
            }
        }
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