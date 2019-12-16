//brute force
/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   TIME: 14-12-2019 
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
#define MOD             998244353
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
bool ispoweroftwo(long long n);
bool isvowel(char x);
ll chartoint(char ch);
ll CEIL(ll x,ll y);
ll FLOOR(ll x,ll y);

long long power(long long a,long long b)
{
    long long res=1;
    if(b==0)
        return res;
    a=a%MOD;
    while(b>0)
    {
        if(b%2)
            res=(res*a)%MOD;
        b/=2;
        a=(a*a)%MOD;
    }
    return res%MOD;
}
ll inverse(ll a)
{
    return power(a,MOD-2);
}
ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    if(a==0)
    {
        *x=0;
        *y=1;
        return b;
    }
    ll x1,y1;
    ll gcd=gcdExtended(b%a,a,&x1,&y1);
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}
ll inverse1(ll b)
{
    ll x,y;
    ll g=gcdExtended(b,MOD,&x,&y);
    //DEB(g);
    if(g==1)
        return (x%MOD + MOD)%MOD;
    return -1;

}
// ll ncr(ll n,ll r)
// {
//     ll z=fact[n]*inverse((fact[r]*fact[n-r])%MOD)%MOD;
//     return z;
// }
ll calculate(ll a,ll b)
{
    a=a%MOD;
    ll z=inverse1(b);
    //DEB(z);
    if(z!=-1)
        return (z*a)%MOD;
    return -1;
}

// typedef struct
// {
//     ll a,b,c;
// }arr;
// arr list[100005];
// int cmp1(const void *a, const void *b)
// {
//     arr *ia=(arr *)a;
//     arr *ib=(arr *)b;
//     if(ib->c < ia->c)
//         return -1;
//     return 1;
    
// }
ll solve(ll arr1[],ll arr2[],ll n)
{
    if(n==1)
        return n-2;
    ll a=n,b=n;
    while(b>1)
    {
        if(arr2[a-2]>=arr1[b-2])
        {
            a--;
        }
        b--;
        // DEB(a);
        // DEB(b);
    }
    return a-2;
}
int main()
{
    //printf("HELLO\n");
    //makeTriangle();

    CASES
    {
        ll n;
        SC1(n);
        ll z1[n-1][2];
        ll arr1[n-1],arr2[n];
        ll p=1;
        REP(i,n-1)
        {
            ll x,y,z;
            SC3(x,y,z);
            // list[i].a=x;
            // list[i].b=y;
            // list[i].c=z;
            arr1[i]=z;
        }
        REP(i,n)
        {
            SC1(arr2[i]);
        }
        //qsort(list,n-1,sizeof(arr),cmp1);
        ll ans=0,mav=0;;
        // REP(i,n-1)
        // {
        //     arr1[i]=list[i].c;
        // }
        qsort(arr1,n-1,sizeof(arr1[0]),cmp);
        qsort(arr2,n,sizeof(arr2[0]),cmp);
        // sort(arr1,arr1+n-1);
        // sort(arr2,arr2+n);
        ll x=0;
        x=solve(arr1,arr2,n);
        while(x!=-1)
        {
            arr2[x]=(arr1[n-2]*p);
            qsort(arr2,n,sizeof(arr2[0]),cmp);
            // sort(arr2,arr2+n);
            ans++;
            // if(arr2[0]==arr2[n-1])
            //     ans-=2;
            mav+=x;
            // DEB(mav);
            if(ans<0)
                p++;
            x=solve(arr1,arr2,n);
        }
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