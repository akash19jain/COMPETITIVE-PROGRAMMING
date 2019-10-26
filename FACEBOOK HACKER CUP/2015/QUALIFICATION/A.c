/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:23/10/2019 
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
bool isPoweroftwo(long long n);
 
int main()
{
    ll a1=1;
    CASES
    {
        printf("Case #%lld: ",a1);
        a1++;
        char str[15];
        SCS(str);
        ll a=0;
        ll len=SZ(str);
        char mina[len+1];
        strcpy(mina,str);
        REP(i,len)
        {
            int x=str[i]-'0';
            int min=x-1,pos=-1;
            FOR(j,i+1,len-1)
            {
                int y=str[j]-'0';
                if(y<=min && (i!=0 || y!=0 ))
                {
                    min=y;
                    pos=j;
                }
            }
            if(pos!=-1 && (i!=0 ||min!=0))
            {
                REP(j,len)
                {
                    if(j==i)
                    {
                        mina[a++]=str[pos];
                        continue;
                    }
                    if(j==pos)
                    {
                        mina[a++]=str[i];
                        continue;
                    }
                    mina[a++]=str[j];
                }

                mina[a]='\0';
                break;
            }
        }
        char maxa[len+1];
        strcpy(maxa,str);
        a=0;
        REP(i,len)
        {
            int x=str[i]-'0';
            int min=x+1,pos=-1;
            FOR(j,i+1,len-1)
            {
                int y=str[j]-'0';
                if(y>=min)
                {
                    min=y;
                    pos=j;
                }
            }
            if(pos!=-1 && min!=0)
            {
                REP(j,len)
                {
                    if(j==i)
                    {
                        maxa[a++]=str[pos];
                        continue;
                    }
                    if(j==pos)
                    {
                        maxa[a++]=str[i];
                        continue;
                    }
                    maxa[a++]=str[j];
                }

                maxa[a]='\0';
                break;
            }
        }
        printf("%s %s\n",mina,maxa);
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