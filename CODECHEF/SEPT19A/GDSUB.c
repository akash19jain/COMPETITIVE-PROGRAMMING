/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:11/09/2019 
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
	ll n,k;
	SC2(n,k);
	ll arr[n];
	ll count[10005];
	MEM(count,0);
	REP(i,n)
	{
		SC1(arr[i]);
		count[arr[i]]++;
	}
	ll c=0;
	
	REP(i,10002)
	{
		if(count[i]!=0)
			c++;
	}
	//DEB(c);
	ll arr1[c];
	c=0;
	REP(i,10002)
	{
		if(count[i]!=0)
		{
			arr1[c++]=count[i];
		}
	}
	//DEB(c);
	if(c<k)
		k=c;
	//DEB(k);
	ll sum[c+1];
	MEM(sum,0);
	ll dp[k+2];
	MEM(dp,0);
	//dp[0]=arr1[0];
	ll z1=0;
	if(k==1)
	{
		PF1(n+1);
		return 0;
	}

	/*REP(i,c)
		DEB(arr1[i]);*/
	FOR(i,0,c-1)
	{
		REP(j,k)
		{
			ll z=dp[j]%MOD;
			
			if(j>i)
				break;
			if(j==0)
			{
				dp[j]=(arr1[i]+z)%MOD;
			}
			else
			{
				dp[j]=((arr1[i]%MOD)*(z1%MOD))%MOD;
				dp[j]+=z;
				dp[j]=dp[j]%MOD;
			}
			//DEB(dp[j]);
			z1=z;
			sum[j]=dp[j];
		}
	}
	ll ans=0;
	REP(i,k+1)
	{
		ans+=dp[i];
		//DEB(dp[i]);
		ans=ans%MOD;
	}


	ans++;
	ans=ans%MOD;
	PF1(ans);
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