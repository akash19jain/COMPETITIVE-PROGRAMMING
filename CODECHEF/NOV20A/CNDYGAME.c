/*  AUTHOR: AKASH JAIN
*   EMAIL:  akash19jain@gmail.com
*   ID:     akash19jain
*   DATE:   11-11-2020 16:00:25
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
#ifndef ONLINE_JUDGE
	freopen("F:\\COMPETITIVE-PROGRAMMING\\inp.txt", "r", stdin);
	freopen("F:\\COMPETITIVE-PROGRAMMING\\out.txt", "w", stdout);
#endif

	CASES
	{
		ll n;
		SC1(n);
		ll arr[n];
		SCA(arr, n);
		ll total = 0;
		ll prefix[n + 1];
		MEM(prefix, 0);
		REP(i, n)
		{
			total += arr[i];
			if (arr[i] % 2 == 1)
			{
				total--;
			}
			prefix[i] = total;
		}
		bool hasone = false;
		ll pos = -1;
		REP(i, n)
		{
			if (arr[i] == 1)
			{
				hasone = true;
				pos = i;
			}
		}

		bool lastodd = false;
		if (arr[n - 1] % 2 == 1)
			lastodd = true;


		ll q;
		SC1(q);
		while (q--)
		{
			ll r;
			SC1(r);
			ll ans = 0;

			// if 1 is present at first

			if (pos == 0)
			{
				if (n == 1)
				{
					//DEB(n);
					ans = r;
					ans = ans % MOD;
					PF1(ans);
					continue;
				}
				ll times = r / n;
				ans = times;
				if (r % n != 0)
				{
					ans++;
				}
				if (times > 0 && (r % n) == 1 )
					ans--;
				ans = (ans + MOD) % MOD;
				PF1(ans);
				continue;
			}
			//if 1 is not present or present at last
			if (!hasone || pos == (n - 1))
			{
				ll times = r / n;
				ans = (times % MOD * total % MOD) % MOD;
				//DEB(ans);
				if (lastodd == false)
				{
					ans -= times;
					ans = (ans + MOD) % MOD;
				}
				else
				{
					ans += times;
					ans = (ans + MOD) % MOD;
				}
				ll rem = r % n;
				rem--;
				if (rem == -1)
				{
					if (arr[n - 1] % 2 == 0)
						ans++;
				}
				//DEB(rem);
				if (rem >= 0)
					ans += prefix[rem];
				// else
				// {
				// 	if (lastodd == false)
				// 		ans++;
				// }
				if (rem >= 0 && arr[rem] % 2 == 1)
					ans++;
				ans = ans % MOD;
				PF1(ans);
				continue;
			}





			//if 1 is present in the center
			ll before = total;
			if (arr[pos - 1] % 2 == 0)
				before--;
			else
				before++;
			ll times = r / n;
			//DEB(times);
			//DEB(before);
			ans = (times % MOD * before % MOD) % MOD;
			if (lastodd == false)
			{
				ans -= times;
				ans = (ans + MOD) % MOD;
			}
			else
			{
				ans += times;
				ans = (ans + MOD) % MOD;
			}
			//DEB(ans);
			ll rem = r % n;
			rem--;
			if (rem == -1)
			{
				if (arr[n - 1] % 2 == 0)
					ans++;
			}
			else if (rem == pos)
			{
				ans += prefix[rem];
				ans++;
				ans = ans % MOD;
			}
			else if (rem == (pos - 1))
			{
				ans += prefix[rem];
				if (arr[rem] % 2 == 1)
					ans++;
				ans = ans % MOD;
			}
			else if (rem < pos)
			{
				ans += prefix[rem];
				if (arr[rem] % 2 == 1)
					ans++;
				ans = ans % MOD;
			}
			else
			{
				//PFS("HERE");
				ans += prefix[rem];
				//DEB(ans);
				if (arr[pos - 1] % 2 == 0)
					ans--;
				else
					ans++;
				//DEB(ans);
				if (arr[rem] % 2 == 1)
					ans++;
				ans = (ans + MOD) % MOD;
			}
			ans = ans % MOD;
			PF1(ans);



		}
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