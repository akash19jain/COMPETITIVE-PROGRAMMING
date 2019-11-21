/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   TIME: 02-11-2019 16:28:24
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
#define SCA(a,n)        for(long long i=0;i<n;i++)    scanf("%lld",&a[i]);
#define PF1(x)          printf("%lld\n",x)
#define PF2(x,y)        printf("%lld %lld\n",x,y)
#define PF3(x,y,z)      printf("%lld %lld %lld\n",x,y,z)
#define PFA(a,n)        for(long long i=0;i<n;i++)    printf("%lld",a[i]); printf("\n");
#define PFN                printf("\n")
#define REP(i,n)        for(long long i=0;i<(n);++i)
#define FOR(i,a,b)      for(long long i=(a);i<=(b);++i)
#define FORD(i,a,b)     for(long long i=(a);i>=(b);--i)
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
double minv(double a,double b);
long long gcd(long long u,long long v);
long long digits(long long n);
bool ispoweroftwo(long long n);
bool isvowel(char x);
ll chartoint(char ch);
ll CEIL(ll x,ll y);
ll FLOOR(ll x,ll y);

ll iP[2];
ll a[5005][2],b[5005][2],c[5005][2];

double dist(ll pos)
{
    double ans=(iP[0]-a[pos][0])*(iP[0]-a[pos][0]) + (iP[1]-a[pos][1])*(iP[1]-a[pos][1]);
    ans=sqrt(ans);
    return ans;
}
double dist1(ll pos)
{
    double ans=(iP[0]-b[pos][0])*(iP[0]-b[pos][0]) + (iP[1]-b[pos][1])*(iP[1]-b[pos][1]);
    ans=sqrt(ans);
    return ans;
}
double dist2(ll i,ll j)
{
    double ans=(b[i][0]-a[j][0])*(b[i][0]-a[j][0]) + (b[i][1]-a[j][1])*(b[i][1]-a[j][1]);
    ans=sqrt(ans);
    return ans;
}
double dist5(ll i,ll j)
{
    double ans=(b[i][0]-a[j][0])*(b[i][0]-a[j][0]) + (b[i][1]-a[j][1])*(b[i][1]-a[j][1]);
    ans=sqrt(ans);
    return ans;
}
double dist3(ll i,ll j)
{
    double ans=(c[i][0]-a[j][0])*(c[i][0]-a[j][0]) + (c[i][1]-a[j][1])*(c[i][1]-a[j][1]);
    ans=sqrt(ans);
    return ans;
}
double dist4(ll i,ll j)
{
    double ans=(b[i][0]-c[j][0])*(b[i][0]-c[j][0]) + (b[i][1]-c[j][1])*(b[i][1]-c[j][1]);
    ans=sqrt(ans);
    return ans;
}

int main()
{
    CASES
    {   
        double ans=(double)MAX;
        SC2(iP[0],iP[1]);
        ll n,m,k;
        SC3(n,m,k);
        ll co=0;
        ll delta=n*m*k;
        double x=1.0;
        double a1[n],b1[m],c1[m],d1[n];
        REP(i,n)
        {
            SC2(a[i][0],a[i][1]);
            d1[i]=(double)MAX;
        }
        REP(i,m)
        {
            SC2(b[i][0],b[i][1]);
            c1[i]=(double)MAX;
        }
        REP(i,k)
        {
            SC2(c[i][0],c[i][1]);
        }
        
        REP(i,n)
        {
            a1[i]=dist(i);
            co+=1.0*a1[i];

        }
        REP(i,m)
        {
            b1[i]=dist1(i);
            co+=1.0*b1[i];
        }
        REP(i,m)
        {
            
            REP(j,n)
            {
                double cal=dist2(i,j);
                cal+=1.0*a1[j];
                c1[i]=minv(1.0*cal,x*c1[i]);
                delta-=i;
            }
            co+=1.0*c1[i];
        }
        REP(i,n)
        {
            REP(j,m)
            {
                double cal=dist5(j,i);
                cal+=1.0*b1[j];
                d1[i]=minv(1*cal,x*d1[i]);
                delta-=j;
            }
        }
        REP(i,k)
        {
            REP(j,n)
            {
                ans=minv(1*ans,x*d1[j]+dist3(i,j));
            }
            REP(j,m)
            {
                ans=minv(1*ans,x*c1[j]+dist4(j,i));
            }
        }

        printf("%.12f\n",ans);
    }

    return 0;
}
 
 
//qsort(arr,n,sizeof(arr[0]),cmp);
int cmp (const void * a, const void * b)
{
    if( *(ll*)a - *(ll*)b < 0 ) return 1;
    if( *(ll*)a - *(ll*)b > 0 ) return -1;
        return 0;
}
long long maxv(long long a,long long b)
{
    if(a>b) return a;
        return b;
}
double minv(double a,double b)
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
bool ispoweroftwo(long long x)
{
    return x && (!(x&(x-1)));
}
bool isvowel(char x)
{
    return(x=='a' || x== 'e' ||x=='i' || x== 'o' || x=='u' );
}
ll chartoint(char ch)
{
    if(ch>='A' && ch<='Z') return(ch-'A');
    else if(ch>='0' && ch<='9') return (ch-'0');
    else if(ch>='a' && ch<='z') return (ch-'a');
    else return 0;
}
ll CEIL(ll x,ll y)
{
    if(x%y==0) return(x/y);
    else return(x/y +1);
}
 
ll FLOOR(ll x,ll y)
{
    if(x%y==0) return(x/y);
    else return(x/y -1);
}