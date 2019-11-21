/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:06/10/2019 
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
ll toDecimal(char arr[],ll base)
{
    //DEB(base);
    //printf("%s\n",arr);
    ll len=SZ(arr);
    ll power=1;
    ll num=0;
    FORD(i,len-1,0)
    {
        ll z;

        if((int)arr[i]>='0' && (int)arr[i]<='9')
            z=(int)arr[i]-'0';
        else 
            z=(int)arr[i]-'A'+10;
        if(z>=base)
            return -2;
        num+=z*power;
        power=power*base;
        if(num>10e12)
            return -1;

    }
    //DEB(num);
    return num;
}
int main()
{
    CASES
    {
        ll n;
        SC1(n);
        ll base[n],pos=-1;
        char value[n][50];
        REP(i,n)
        {
            SC1(base[i]);
            SCS(value[i]);
            if(base[i]!=-1)
            {
                pos=i;
            }
        }
        //DEB(pos);
        ll ans=-1,f=0;
        if(pos!=-1)
        {
            ans=toDecimal(value[pos],base[pos]);
            //DEB(base[pos]);
            if(ans==-2)
            {
                printf("-1\n");
                continue;
            }
            //DEB(ans);
            REP(i,n)
            {
                if(base[i]!=-1)
                {
                    ll z=toDecimal(value[i],base[i]);
                    if(z!=ans)
                    {
                        f=1;
                        break;
                    }
                }
                else
                {
                    ll l=SZ(value[i]),max=0,g=0;
                    //DEB(l);
                    REP(k,l)
                    {
                        if(value[i][k]>max)
                            max=value[i][k];
                    }

                    if(max>='A' && max<='Z')
                        max=max-'A'+10;
                    else
                        max-='0';
                    //DEB(max);
                    if(max==0)
                        max=1;
                    for(int j=max+1;j<=36;j++)
                    {
                        ll z=toDecimal(value[i],j);
                        //DEB(j);
                        //DEB(z);
                        if(z==ans)
                        {
                            g=1;
                            break;
                        }
                    }
                    if(!g)
                    {
                        f=1;
                        break;
                    }
                }
            }
            if(ans>1e12)
                printf("-1\n");
            else if(f)
                printf("-1\n");
            else
                printf("%lld\n",ans);
        }
        else
        {
            ll final[n][40];
            REP(i,n)
            {
                REP(j,36)
                {
                    final[i][j]=MAX;
                }
            }
            REP(i,n)
            {
                ll l=SZ(value[i]),max=0,g=0;
                //DEB(l);
                for(int j=2;j<=36;j++)
                {
                    ll z=toDecimal(value[i],j);
                    //DEB(j);
                    //DEB(z);
                    if(z==-2)
                        z=MAX;
                    final[i][j]=z;
                }
            }
            REP(i,n)
            {
                qsort(final[i],36,sizeof(final[i][0]),cmp);
            }
            ll baseindex=0;
            ll index[n];
            ll match=0;
            bool found=false;
            while(baseindex<36 && !found)
            {
                match=0;
                FOR(i,0,n-1)
                {
                    int cur=index[i-1];
                }
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