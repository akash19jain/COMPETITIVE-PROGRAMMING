/*  AUTHOR: AKASH JAIN
*   EMAIL:  akash19jain@gmail.com
*   ID:     akash19jain
*   DATE:   16-08-2020 09:03:18
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
const ll INF = 1 << 29;
const ll MOD = 1000000007;
const ll FMOD = 998244353;
const ll MAX = 10000000005;
const ll MIN = -10000000005;
#define FILEIO(name) \  freopen(name".in", "r", stdin); \   freopen(name".out", "w", stdout);
int cmp(const void * a, const void * b);
long long maxv(long long a, long long b);
long long minv(long long a, long long b);
long long gcd(long long u, long long v);
long long digits(long long n);
bool ispoweroftwo(long long n);
bool isvowel(char x);
ll chartoint(char ch);
ll CEIL(ll x, ll y);
ll FLOOR(ll x, ll y);


int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("F:\\COMPETITIVE-PROGRAMMING\\inp.txt", "r", stdin);
// 	freopen("F:\\COMPETITIVE-PROGRAMMING\\out.txt", "w", stdout);
// #endif

	ll x, y;
	SC2(x, y);
	if (x > y)
	{
		ll t = x;
		x = y;
		y = t;
	}
	ll count = 0;
	ll n;
	SC1(n);
	float arr[n];
	REP(i, n)
	{
		cin >> arr[i];
	}

	float one[n], two[n];
	float sa = 0, sb = 0;
	REP(i, y)
	{
		sb += arr[i];
		count++;
	}
	REP(i, x)
	{
		sa += arr[i];
		count++;
	}
	// cout << sa << "\n";
	// cout << sb << "\n";
	one[0] = (sa * 1.0) / x;
	two[0] = (sb * 1.0) / y;

	REP(i, n - y + 1)
	{
		if (i == 0)
			continue;
		sb = sb - arr[i - 1] + arr[i + y - 1];
		two[i] = (sb * 1.0) / y;
		count--;
	}

	REP(i, n - x + 1)
	{
		if (i == 0)
			continue;
		sa = sa - arr[i - 1] + arr[i + x - 1];
		one[i] = (sa * 1.0) / x;
		count--;
	}

	// REP(i, n - x + 1)
	// {
	// 	cout << one[i] << " ";
	// }
	// PFN;
	// REP(i, n - y + 1)
	// {
	// 	cout << two[i] << " ";
	// }
	// PFN;

	ll ans = 0;

	ll final[n];
	REP(i, n - y + 1)
	{
		if (one[n - x + 1 - i - 1] < two[n - y + 1 - 1 - i])
		{
			final[n - y + 1 - i - 1] = 1;
		}
		else if ((one[n - x + 1 - i - 1] > two[n - y + 1 - 1 - i]))
		{
			final[n - y + 1 - i - 1] = 0;
		}
		else
		{
			final[n - y + 1 - i - 1] = final[n - y + 1 - i - 1 - 1];
		}
		count++;
	}

	REP(i, n - y + 1)
	{
		//DEB(final[i]);
		if (i == 0)
			continue;
		if (final[i - 1] != final[i])
			ans++;
		count++;
	}

	PF1(ans);


	return 0;
}


//qsort(arr,n,sizeof(arr[0]),cmp);
int cmp (const void * a, const void * b)
{
	if ( *(ll*)a - * (ll*)b < 0 ) return -1;
	if ( *(ll*)a - * (ll*)b > 0 ) return 1;
	return 0;
}
long long maxv(long long a, long long b)
{
	if (a > b) return a;
	return b;
}
long long minv(long long a, long long b)
{
	if (a < b) return a;
	return b;
}
long long gcd(long long u, long long v)
{
	if (v == 0) return u;
	return gcd(v, u % v);
}
long long digits(long long n)    //to calculate no of digits in a number
{
	return floor(log10(n)) + 1;
}
bool ispoweroftwo(long long x)
{
	return x && (!(x & (x - 1)));
}
bool isvowel(char x)
{
	return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' );
}
ll chartoint(char ch)
{
	if (ch >= 'A' && ch <= 'Z') return (ch - 'A');
	else if (ch >= '0' && ch <= '9') return (ch - '0');
	else if (ch >= 'a' && ch <= 'z') return (ch - 'a');
	else return 0;
}
ll CEIL(ll x, ll y)
{
	if (x % y == 0) return (x / y);
	else return (x / y + 1);
}

ll FLOOR(ll x, ll y)
{
	if (x % y == 0) return (x / y);
	else return (x / y - 1);
}