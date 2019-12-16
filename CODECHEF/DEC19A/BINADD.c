/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   TIME: 08-12-2019 
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
    CASES
    {
        char a[100005],b[100005];
        SCS(a);
        SCS(b);
        ll n=SZ(a),m=SZ(b);
        // DEB(n);
        // DEB(m);
        ll j=0,ans=0,y=0;
        // if(n<m)
        // {
        //     REP(i,n)
        //     {
        //         char ch=a[i];
        //         a[i]=b[i];
        //         b[i]=ch;
        //     }
        //     FOR(i,n,m-1)
        //     {
        //         a[i]=b[i];
        //         y++;
        //         w++;
        //     }
        //     ll v=n;
        //     n=m;
        //     m=v;
        //     a[n]='\0';
        //     b[m]='\0';
        // }
        ll x=0;
        // DEB(n);
        // DEB(m);
        // printf("%s\n",a);
        // printf("%s\n",b);
        ll w=0;
        if(n>=m)
        {
            REP(i,m)
            {
                x=i+1;
                y=i;
                if(a[n-i-1]=='1' && b[m-i-1]=='1' && w<=1)
                {
                    FOR(j,i+1,n)
                    {
                        w++;
                        x=j;
                        if(j==n)
                            break;
                        char u='0',v='0';
                        if(j<n)
                        {
                            ll z=n-j-1;
                            u=a[z];
                            y++;
                        }
                        if(j<m)
                        {
                            ll z=m-j-1;
                            v=b[z];
                            y++;
                        }
                        w=w%2;
                        //printf("%c %c\n",u,v);
                        if(!(u=='0' && v=='1')&& !(u=='1' && v=='0'))
                            break;

                    }
                    if(y>x)
                        y=x;
                    ans=maxv(ans,x-i+1);
                    //DEB(x);
                }
                //w=w%2;
                else if(a[n-i-1]=='0' && b[m-i-1]=='1')
                {
                    y++;
                    ans=maxv(ans,1);
                }
            }
            PF1(ans);
        }
        else
        {
            REP(i,n)
            {
                y=i;
                x=i+1;
                if(a[n-i-1]=='1' && b[m-i-1]=='1' && w<=1)
                {
                    FOR(j,i+1,m)
                    {
                        w++;
                        x=j;
                        if(j==m)
                            break;
                        char u='0',v='0';
                        if(j<n)
                        {
                            ll z=n-j-1;
                            u=a[z];
                            y++;
                        }
                        if(j<m)
                        {
                            ll z=m-j-1;
                            v=b[z];
                            y++;
                        }
                        w=w%2;
                        //printf("%c %c\n",u,v);
                        if(!(u=='0' && v=='1')&& !(u=='1' && v=='0'))
                        {

                            break;
                        }
                    }
                    ans=maxv(ans,x-i+1);
                    //DEB(x);
                }
                // w=w%2;
                else if(a[n-i-1]=='0' && b[m-i-1]=='1')
                {
                    if(y>x)
                        y=x;
                    ans=maxv(ans,1);
                }
            }
            FOR(i,n,m-1)
            {
                if(b[m-i-1]=='1')
                {
                    y--;
                    ans=maxv(ans,1);
                    break;
                }
            }
            PF1(ans);
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