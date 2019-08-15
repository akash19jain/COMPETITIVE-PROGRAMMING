/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:14/08/2019 
*/
//#include<algorithm>
//using namespace std;
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define SC1(x)          scanf("%lld",&x)
#define SC2(x,y)        scanf("%lld%lld",&x,&y)
#define SC3(x,y,z)      scanf("%lld%lld%lld",&x,&y,&z)
#define SCS(x)          scanf("\n%s", x)
#define PF1(x)          printf("%lld ",x)
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

int arr[32];    //NUMBERS ARE IN RANGE OF POW(3,32)

//CONVERTING TERNARY TO BALANCED TERNARY 
void balQui(ll qui)
{
    ll carry=0,base=10;
    int i=32;
    while(qui>0)
    {
        int r=ter%base;
        r=r+carry;
        if(r==0)
        {
            arr[i--]=0;
            carry=0;
        }
        else if(r==1)
        {
            arr[i--]=1;
            carry=0;
        }
        else if(r==2)
        {
            arr[i--]=2;
            carry=0;
        }
        else if(r==3)
        {
            arr[i--]=-1;
            carry=1;
        }
        else if(r==4)
        {
            arr[i--]=-2;
            carry=2;
        }
        else if(r==5)
        {
            arr[i--]=0;
            carry=0;
        }
        else if(r==6)
        {
            arr[i--]=1;
            carry=0;
        }
        qui=qui/base;
    }
    if(carry==1)
        arr[i]=1;
}
// CONVERTING TO BASE 3, SIMILAR TO BINARY CONVERSION
ll quinary(ll n)
{
    ll ans=0,rem=1,base=1;
    while(n>0)
    {
        rem=n%5;
        ans=ans+rem*base;
        n=n/5;
        base=base*10;
    }
    return ans;
}
int main()
{
      ll n;
      SC1(n);
      ll qui=quinary(n);
      PF1(qui);
      balQui(ter);
      int i=0;
      while(arr[i]==0)
        i++;

    //PRINTING BY REPLACING 'Z' IN PLACE OF '-1'
    for(int j=i;j<=32;j++)
    {
        if(arr[j]==-1)
            printf("A");
        else if(arr[j]==-2)
            printf("Z");
        else
        {
            printf("%d",arr[j]);
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