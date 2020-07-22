//STILL 30 POINTS
//https://www.geeksforgeeks.org/segmented-sieve/
/*  AUTHOR: AKASH JAIN
*   EMAIL:  akash19jain@gmail.com
*   ID:     akash19jain
*   DATE:   22-07-2020 23:14:26
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

// bool prime[10009];

vector<ll> val;
// void SieveOfEratosthenes(int n)
// {

// 	memset(prime, true, sizeof(prime));

// 	for (int p = 2; p * p <= n; p++)
// 	{
// 		if (prime[p] == true)
// 		{
// 			for (int i = p * p; i <= n; i += p)
// 				prime[i] = false;
// 		}
// 	}
// }

void simpleSieve(int limit, vector<int> &prime)
{
	// Create a boolean array "mark[0..n-1]" and initialize
	// all entries of it as true. A value in mark[p] will
	// finally be false if 'p' is Not a prime, else true.
	bool mark[limit + 1];
	memset(mark, true, sizeof(mark));

	for (int p = 2; p * p < limit; p++)
	{
		// If p is not changed, then it is a prime
		if (mark[p] == true)
		{
			// Update all multiples of p
			for (int i = p * 2; i < limit; i += p)
				mark[i] = false;
		}
	}

	// Print all prime numbers and store them in prime
	for (int p = 2; p < limit; p++)
	{
		if (mark[p] == true)
		{
			prime.push_back(p);
			val.push_back(p);
			//cout << p << " ";
		}
	}
}

// Prints all prime numbers smaller than 'n'
void segmentedSieve(int n)
{
	// Compute all primes smaller than or equal
	// to square root of n using simple sieve
	int limit = floor(sqrt(n)) + 1;
	vector<int> prime;
	simpleSieve(limit, prime);

	// Divide the range [0..n-1] in different segments
	// We have chosen segment size as sqrt(n).
	int low = limit;
	int high = 2 * limit;

	// While all segments of range [0..n-1] are not processed,
	// process one segment at a time
	while (low < n)
	{
		if (high >= n)
			high = n;

		// To mark primes in current range. A value in mark[i]
		// will finally be false if 'i-low' is Not a prime,
		// else true.
		bool mark[limit + 1];
		memset(mark, true, sizeof(mark));

		// Use the found primes by simpleSieve() to find
		// primes in current range
		for (int i = 0; i < prime.size(); i++)
		{
			// Find the minimum number in [low..high] that is
			// a multiple of prime[i] (divisible by prime[i])
			// For example, if low is 31 and prime[i] is 3,
			// we start with 33.
			int loLim = floor(low / prime[i]) * prime[i];
			if (loLim < low)
				loLim += prime[i];

			/* Mark multiples of prime[i] in [low..high]:
			    We are marking j - low for j, i.e. each number
			    in range [low, high] is mapped to [0, high-low]
			    so if range is [50, 100] marking 50 corresponds
			    to marking 0, marking 51 corresponds to 1 and
			    so on. In this way we need to allocate space only
			    for range */
			for (int j = loLim; j < high; j += prime[i])
				mark[j - low] = false;
		}

		// Numbers which are not marked as false are prime
		for (int i = low; i < high; i++)
			if (mark[i - low] == true)
				val.push_back(i);

		// Update low and high for next segment
		low = low + limit;
		high = high + limit;
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("F:\\COMPETITIVE-PROGRAMMING\\inp.txt", "r", stdin);
	freopen("F:\\COMPETITIVE-PROGRAMMING\\out.txt", "w", stdout);
#endif
	// SieveOfEratosthenes(10005);
	segmentedSieve(10005);



	CASES
	{
		ll n;
		SC1(n);
		ll ans = 0;
		REP(i, val.size())
		{
			if (val[i] > n)
				break;
			if (n % val[i] == 0)
				ans += val[i];
		}
		PF1(ans);
	}

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