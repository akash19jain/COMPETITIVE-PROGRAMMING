/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:07/10/2019 
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
        ll n,m;
        SC2(n,m);
        //bool arr[n+1][n+1];
        //MEM(arr,false);
        ll edges[m][2];
        ll degree[n+1];
        MEM(degree,0);
        REP(i,m)
        {
            ll a,b;
            SC2(a,b);
            edges[i][0]=a;
            edges[i][1]=b;
            //arr[a][b]=true;
            //arr[b][a]=true;
            degree[a]++;
            degree[b]++;
        }
        if(m%2==0)
        {
            printf("1\n");
            REP(i,n)
                printf("1 ");
            printf("\n");
            continue;
        }
        int f=0,pos=0;
        REP(i,n+1)
        {
            if(i==0)
                continue;
            if(degree[i]%2==1)
            {
                f=1;
                pos=i;
                break;

            }
        }
        if(f)
        {
            printf("2\n");
            REP(i,n+1)
            {
                if(i==0)
                    continue;
                if(i==pos)
                    printf("2 ");
                else
                    printf("1 ");
            }
            printf("\n");
            continue;
        }
        else
        {
            ll pos1=0,pos2=0;
            printf("3\n");
            REP(i,n+1)
            {
                if(i==0)
                    continue;
                if(degree[i]!=0)
                {
                    pos1=i;
                    break;
                }
            }
            REP(i,m)
            {
                if(edges[i][0]==pos1)
                {
                    pos2=edges[i][1];
                    break;
                }
                if(edges[i][1]==pos1)
                {
                    pos2=edges[i][0];
                    break;
                }
            }
            REP(i,n+1)
            {
                if(i==0)
                    continue;
                if(i==pos1)
                    printf("2 ");
                else if(i==pos2)
                    printf("3 ");
                else
                    printf("1 ");

            }
            printf("\n");
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