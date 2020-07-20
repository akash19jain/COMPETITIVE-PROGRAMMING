/*  AUTHOR: AKASH JAIN
*   EMAIL:  akash19jain@gmail.com
*   ID:     akash19jain
*   DATE:   09-06-2020 11:24:31
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


void print(vector<ll> a)
{
	ll n = a.size();
	REP(i, n)
	cout << a[i] << " ";
	cout << "\n";
}
int main()
{


	ll n;
	SC1(n);

	ll lowodd = 1, upodd = n, loweven = 1, upeven = n;

	ll midodd = lowodd + (upodd - lowodd)  / 2;
	ll mideven = loweven + (upeven - loweven)  / 2;

	REP(i, 75)
	{
		if (i % 2 == 0)
		{
			PF1(midodd);
			FLSH;
			char x[5];
			SCS(x);
			if (x[0] == 'E')
			{
				return 0;
			}
			else if (x[0] == 'L')
			{
				upodd = midodd - 1;
			}
			else
			{
				lowodd = midodd + 1;
			}
			midodd = lowodd + (upodd - lowodd)  / 2;
		}
		else
		{
			PF1(mideven);
			FLSH;
			char x[5];
			SCS(x);
			if (x[0] == 'E')
			{
				return 0;
			}
			else if (x[0] == 'L')
			{
				upeven = mideven - 1;
			}
			else
			{
				loweven = mideven + 1;
			}
			mideven = loweven + (upeven - loweven)  / 2;
		}
	}

	vector<ll> arr;
	vector<ll>::iterator it1, it2;
	FOR(i, 1, n)
	{
		arr.push_back(i);
	}
	REP(ii, 300)
	{
		upodd = upodd / 2;
		ll low = 1, up = n;
		ll s = arr.size();

		if (s <= 5)
		{
			REP(i, s)
			{
				PF1(arr[i]);
				FLSH;
				char x[5];
				SCS(x);
				if (x[0] == 'E')
				{
					return 0;
				}
			}
		}
		ll m1 = s / 3;

		lowodd /= 2;
		PF1(arr[m1]);
		FLSH;
		char x[5];
		SCS(x);
		if (x[0] == 'E')
		{
			return 0;
		}

		ll m2 = m1;
		m2 = m2 * 2;


		PF1(arr[m2]);
		FLSH;
		char x1[5];
		SCS(x1);
		if (x1[0] == 'E')
		{
			return 0;
		}

		else if (x[0] == 'G' && x1[0] == 'G')
		{
			low = m1 + 1;
			it1 = arr.begin();
			arr.erase(it1, it1 + m1 + 1);
			//print(arr);
			continue;
		}
		else if (x[0] == 'L' && x1[0] == 'L')
		{
			up = m2 - 1;
			it1 = arr.begin();
			it2 = arr.end();
			arr.erase(it1 + m2, it2);
			//print(arr);
			continue;
		}

		PF1(arr[m2]);
		FLSH;
		char x2[5];
		SCS(x2);
		if (x2[0] == 'E')
		{
			return 0;
		}

		else if (x2[0] == 'G' && x1[0] == 'G')
		{
			low = m1 + 1;
			it1 = arr.begin();
			arr.erase(it1, it1 + m1 + 1);
			continue;
		}
		else if (x2[0] == 'L' && x1[0] == 'L')
		{
			up = m2 - 1;
			it1 = arr.begin();
			it2 = arr.end();
			arr.erase(it1 + m2, it2);
			//print(arr);
			continue;
		}


		PF1(arr[m1]);
		FLSH;
		char x3[5];
		SCS(x3);
		if (x3[0] == 'E')
		{
			return 0;
		}

		else if (x2[0] == 'G' && x3[0] == 'G')
		{
			low = m1 + 1;
			it1 = arr.begin();
			arr.erase(it1, it1 + m1 + 1);
			continue;
		}
		else if (x2[0] == 'L' && x3[0] == 'L')
		{
			up = m2 - 1;
			it1 = arr.begin();
			it2 = arr.end();
			arr.erase(it1 + m2, it2);
			//print(arr);
			continue;
		}

		it1 = arr.begin();

		arr.erase(it1 + m1, it1 + m2 + 1);
		//print(arr);

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