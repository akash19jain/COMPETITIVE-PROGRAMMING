/*  AUTHOR: AKASH JAIN
*   EMAIL:  akash19jain@gmail.com
*   ID:     akash19jain  
*   DATE:   20-02-2020 23:06:53
*/


#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
 
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
#define PFA(a,n)        for(long long i=0;i<n;i++)    printf("%lld ",a[i]); printf("\n");
#define PFN             printf("\n")
#define PFS(x)          printf("%s\n",x)
#define REP(i,n)        for(long long i=0;i<(n);++i)
#define FOR(i,a,b)      for(long long i=(a);i<=(b);++i)
#define FORD(i,a,b)     for(long long i=(a);i>=(b);--i)
#define WHILE(n)        while(n--)
#define MEM(a, b)       memset(a, (b), sizeof(a))
#define ITOC(c)         ((char)(((ll)'0')+c))
#define MID(s,e)        (s+(e-s)/2)
#define SZ(a)           strlen(a)          
#define PI              3.1415926535897932384626433832795
#define DEB(x)          printf("The value of \"%s\" is: %d\n",#x,x)
#define CASES           ll t;SC1(t);while(t--)
#define ABS(a)          ((a>0)?a:-(a))
#define SWAP(a,b)       ll z=a;a=b;b=z
#define SWAPC(a,b)      char z=a;a=b;b=z
#define FLSH            fflush(stdout)
typedef long long ll;
typedef unsigned long long ull;
const ll INF = 1<<29;
const ll MOD = 1000000007;
const ll FMOD = 998244353;
const ll MAX = 10000000005;
const ll MIN = -10000000005;
#define FILEIO(name) \  freopen(name".in", "r", stdin); \   freopen(name".out", "w", stdout);
int cmp(const void * a,const void * b);
long long maxv(long long a,long long b);
long long minv(long long a,long long b);
long long gcd(long long u,long long v);
long long digits(long long n);
bool ispoweroftwo(long long n);
bool isvowel(char x);
ll chartoint(char ch);
ll CEIL(ll x,ll y);
ll FLOOR(ll x,ll y);


int main()
{
    ll books,lib,days;
    SC3(books,lib,days);
    ll l=lib;
    ll b=books;
    ll score[b];
    SCA(score,b);
    ll arr[l][3];
    ll arr1[l][1005];
    double points[l][2];
    REP(i,l)
    {
        SC3(arr[i][0],arr[i][1],arr[i][2]);
        double z=(arr[i][2]/(days-arr[i][1]));
        points[i][0]=z;
        points[i][1]=i;
        REP(j,arr[i][0])
            SC1(arr1[i][j]);
    }
    REP(i,l)
    {
        FOR(j,i+1,l-1)
        {
            if(points[i][0]<points[j][0])
            {
                double z=points[i][0];
                points[i][0]=points[j][0];
                points[j][0]=z;
                z=points[i][1];
                points[i][1]=points[j][1];
                points[j][1]=z;
            }
        }
    }
    ll lastshipped=0;
    ll signedup=0;
    ll ans[l],a=0;
    ll numberbooks[l],a2=0;
    MEM(numberbooks,0);
    ll whichbooks[l][1005];
    REP(i,l)
    {
        ll c=(ll)points[i][1];
        ll abhi=arr[c][1];
        lastshipped+=abhi;
        if(lastshipped>days)
            break;
        ans[a]=c;
        ll bookscanned=0;
        ll a1=0;
        ll cdays=0,ccdays=0;
        REP(j,arr[c][0])
        {
            ll c1=arr1[i][j];
            if(score[c1]!=-1)
            {
                bookscanned++;
                whichbooks[a][a1]=c1;
                a1++;
                score[c1]=-1;
                cdays++;
                numberbooks[a]++;
                if(cdays==arr[i][1])
                {
                    cdays=0;
                    ccdays++;
                }
                if(ccdays+lastshipped==days)
                    break;
            }

        }
        if(numberbooks[a]==0)
            a--;
        a++;
        signedup++;
    }
    PF1(signedup);
    REP(i,a)
    {
        PF2(ans[i],numberbooks[i]);
        //PF1(numberbooks[i]);
        REP(j,numberbooks[i])
            printf("%lld ",whichbooks[i][j]);
        PFN;

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