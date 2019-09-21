/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:13/09/2019 
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
	CASES
	{
		ll n,m;
		SC2(n,m);
		if(n==0)
		{
			printf("-1");
			n++;
		}
		if(n==1)
		{
			if(m*n==0)
			{
				printf("0\n");
				continue;
			}
			else if(m==1)
			{
				printf("1\n");
				continue;
			}
			else
			{
				printf("-1\n");
				continue;
			}
		}
		if(n==2)
		{
			if(m*n==0)
			{
				printf("-1\n");
				continue;
			}
			else if(m==1)
			{
				printf("1\n");
				continue;
			}
			else if(m==2 || m==3)
			{
				printf("2\n");
				continue;
			}
			else
			{
				printf("-1\n");
				continue;
			}
		}
		if(n>2)
		{
			if(m<=(n-2))
			{
				printf("-1\n");
				continue;
			}
			if(m>=n-1 && m<=n+1)
			{
				printf("2\n");
				continue;
			}
			if(m<=(n+n))
			{
				printf("3\n");
				continue;
			}
			ll max=(n*(n+1)/2);
			if(m>max)
			{
				printf("-1\n");
				continue;
			}
			if(1)
			{
				ll z=n;
				ll ans=0;
				if(n%2==0)
				{
					z=z*2;
					ans=ans+3;
					m=m-z;
					ll x=(2*m)/n;
					ans+=x;
					if(m%(n/2)!=0)
					{
						ans++;
					}
					PF1(ans);
					continue;
				}
				if(n%2==1)
				{
					ans=ans+2;
					m=m-n;
					z=z*2;
					m=m-n;
					z=0;
					while(m>0)
					{
						ll y=n/2;
						ans++;
						m=m-y;
						if(z==0)
							z++;
						else
						{
							z=0;
							m--;
						}
					}
					ans++;
					PF1(ans);
					continue;
				}
			}
		}

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