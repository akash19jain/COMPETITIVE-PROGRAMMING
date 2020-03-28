/*  AUTHOR: AKASH JAIN
*   EMAIL:  akash19jain@gmail.com
*   ID:     akash19jain  
*   DATE:   22-03-2020 10:34:44
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
#define faster          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
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

ll arr[100][100];
// ll dp[100][1000];
// typedef std::stack<ll> Stack;
// typedef std::vector<int> Array;
ll solvee(ll n,ll k,ll p)
{
	vector<ll> value(p+5);
	FOR(i,1,n)
	{
		vector<ll> lines(k+3);
		FOR(j,1,k)
		{
			cin>>lines[j];
			lines[j]+=lines[j-1];
		}
		for(ll j=p;j>=1;j--)
		{
			for(ll e=j-1;e>=maxv(0,j-k);e--)
			{
				value[j]=maxv(value[j],value[e]+lines[j-e]);
			}
		}
	}
	return value[p];
}
ll answer(ll n,ll k,ll m)
{
	ll sum[n][k];
	REP(i,n)
	{
		ll count=0;
		REP(j,k)
		{
			count+=arr[i][j];
			sum[i][j]=count;
		}
	}
	// REP(i,n)
	// {
	// 	REP(j,k)
	// 	{
	// 		printf("%lld ",sum[i][j]);
	// 	}
	// 	PFN;
	// }



	if(n==1)
		return sum[0][m-1];
	if(n==2)
	{
		ll max=0;
		REP(i,k)
		{
			REP(j,k)
			{
				if(i+j+2<=m)
				{
					ll c=sum[0][i]+sum[1][j];
					max=maxv(c,max);
				}
				if(i+1<=m)
				{
					ll c=sum[0][i];
					max=maxv(c,max);
				}
				if(j+1<=m)
				{
					ll c=sum[1][j];
					max=maxv(c,max);
				}
			}
		}
		return max;
	}
	if(n==3)
	{
		ll max=0;
		REP(i,k)
		{
			REP(j,k)
			{
				REP(jj,k)
				{
					if(i+j+jj+3<=m)
					{
						ll c=sum[0][i]+sum[1][j]+sum[2][jj];
						max=maxv(c,max);
					}
					if(i+j+2<=m)
					{
						ll c=sum[0][i]+sum[1][j];
						max=maxv(c,max);
					}
					if(i+jj+2<=m)
					{
						ll c=sum[0][i]+sum[2][jj];
						max=maxv(c,max);
					}
					if(j+jj+2<=m)
					{
						ll c=sum[1][j]+sum[2][jj];
						max=maxv(c,max);
					}
					if(i+1<=m)
					{
						ll c=sum[0][i];
						max=maxv(c,max);
					}
					if(j+1<=m)
					{
						ll c=sum[1][j];
						max=maxv(c,max);
					}
					if(jj+1<=m)
					{
						ll c=sum[2][jj];
						max=maxv(c,max);
					}
				}
			}
		}
		return max;
	}

	// MEM(dp,0);
	// FOR(i,1,n)
	// {
	// 	FOR(j,1,m)
	// 	{
	// 		//dp[i][j]=dp[i-1][j];
	// 		for(ll jj=k-1;jj>=k-1-(j-1);jj--)
	// 		{
	// 			ll count=k-jj;
	// 			dp[i][j]=maxv(dp[i][j],dp[i][j-count]+sum[i-1][jj]);
	// 		}
	// 	}
	// }
	// REP(i,n+1)
	// {
	// 	REP(j,m+1)
	// 	{
	// 		printf("%lld ",dp[i][j]);
	// 	}
	// 	PFN;
	// }
}
// void solve(Stack stacks[],ll n,Array &arr, ll m)
// {
// 	arr.resize(m+1,0);
// 	REP(i,n)
// 	{
// 		ll index=0,sum=0;
// 		while(!stacks[i].empty())
// 		{
// 			sum+=stacks[i].top();
// 			index++;
// 			if(arr[index]<sum)
// 				arr[index]=sum;
// 			stacks[i].pop();
// 		}
// 	}

// }

// ll max_sum(Array &arr, ll m)
// {
// 	ll sum=0;
// 	REP(i,m/2)
// 	{
// 		ll first=i;
// 		ll last=m-first;
// 		if(arr[first]+arr[last]>sum)
// 			sum=arr[first]+arr[last];
// 	}
// 	return sum;
// }
int main()
{
    #ifndef ONLINE_JUDGE 
        freopen("F:\\COMPETITIVE-PROGRAMMING\\inp.txt", "r", stdin); 
        freopen("F:\\COMPETITIVE-PROGRAMMING\\out.txt", "w", stdout);
    #endif 

    ll t;
    SC1(t);
    for(ll ii=1;ii<=t;ii++)
    {
    	ll n,k,p;
    	SC3(n,k,p);
    	ll d=0;
    	if(n>=4)
    		d=solvee(n,k,p);
    	else
    	{
    	
	    	REP(i,n)
	    	{
	    		REP(j,k)
	    		{
	    			SC1(arr[i][j]);
	    		}
	    	}
	    	d=answer(n,k,p);
	    }

    	// Stack st[n];
    	// REP(i,n)
    	// {
    	// 	ll aa[k];
    	// 	REP(j,k)
    	// 	{
    	// 		SC1(aa[j]);
    	// 	}
    	// 	FORD(j,k-1,0)
    	// 	{
    	// 		st[i].push(aa[j]);
    	// 	}
    	// }
    	// //PF1(st[1].top());
    	// Array arr;
    	// solve(st,n,arr,p);
    	// ll d=max_sum(arr,p);
    	printf("Case #%lld: %lld",ii,d);
    	if(ii!=t)
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