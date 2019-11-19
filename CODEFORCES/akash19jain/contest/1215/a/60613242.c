/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:15/09/2019 
*/
/*#include<algorithm>
#include <bits/stdc++.h>
using namespace std;*/

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
 
int main()
{
	ll a1,a2,k1,k2,n;
	SC2(a1,a2);
	SC2(k1,k2);
	SC1(n);
	ll n1=n;
	ll ans=0;
	if(k1>k2)
	{
		ll t=k1;
		k1=k2;
		k2=t;
		t=a1;
		a1=a2;
		a2=t;
	}
	if(1)
	{
		ll z=n/k1;
		if(z>a1)
		{
			z=a1;
		}
		n-=(z*k1);
		//DEB(z);
		ans+=z;
	}
	if(1)
	{
		ll z=n/k2;
		if(z>a2)
		{
			z=a2;
		}
		n-=(z*k2);
		//DEB(z);
		ans+=z;
	}

	ll max=ans;
	ans=0;
	n=n1;
	ll z=(a1*(k1-1))+(a2*(k2-1));
	if(z>n)
		ans=0;
	else
		ans=n-z;
	ll min=ans;
	PF2(min,max);
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