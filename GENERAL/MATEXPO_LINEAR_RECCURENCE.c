//	For solving the matrix exponentiation we are assuming a
//	linear recurrence equation like below:
//	F(n) = a*F(n-1) + b*F(n-2) + c*F(n-3)   for n >= 3 
/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:19/08/2019 
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
ll a,b,c;
void multiply(ll a[3][3],ll b[3][3])
{
    ll mul[3][3];
    REP(i,3)
    {
        REP(j,3)
        {
            mul[i][j]=0;
            REP(k,3)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    REP(i,3)
        REP(j,3)
            a[i][j]=mul[i][j];
}
ll power(ll mat[3][3],ll n)
{
    ll arr[3][3]={{a,b,c},{1,0,0},{0,1,0}};
    if(n==1)
        return mat[0][0]+arr[0][1];
    
    power(mat,n/2);
    multiply(mat,mat);

    if(n%2!=0)
        multiply(mat,arr);

    return mat[0][0]+mat[0][1];

}
int main()
{
    ll f0,f1,f2;
    SC3(f0,f1,f2);  //THE FIRST 3 ELEMENTS OF THE SEQUENCE
    SC3(a,b,c);     //CONSTANTS
    ll n;
    SC1(n);         //THE TERM THAT YOU WANT TO FIND
    ll mat[3][3]={{a,b,c},{1,0,0},{0,1,0}};
    ll ans=power(mat,n-2);
    PF1(ans);

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