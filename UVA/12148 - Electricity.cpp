/*  AUTHOR: AKASH JAIN
*   EMAIL:  akash19jain@gmail.com
*   ID:     akash19jain  
*   DATE:   08-04-2020 21:00:45
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

inline bool isLeapYear(int year)
{
	return (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0);
}

int main()
{
    #ifndef ONLINE_JUDGE 
        freopen("F:\\COMPETITIVE-PROGRAMMING\\inp.txt", "r", stdin); 
        freopen("F:\\COMPETITIVE-PROGRAMMING\\out.txt", "w", stdout);
    #endif 

    int n;
	while (cin >> n and n)
	{
		int previousD = 0;
		int previousM = 0;
		int previousY = 0;
		int previousC = 0;

		int consecutive = 0;
		unsigned long long totalConsumption = 0;

		for (int i = 0; i < n; ++i)
		{
			int d;
			int m;
			int y;
			int c;

			cin >> d >> m >> y >> c;
			
			// If previous date is 31-Dec and current 1-Jan.
			if (previousD == 31 and previousM == 12 and d == 1 and m == 1 and y - previousY == 1)
			{
				++consecutive;
				totalConsumption += c - previousC;
			}
			// If It is the same year.
			else if (previousY == y)
			{
				
				// If It is the same month.
				if (previousM == m)
				{
					// If It is the next day from previous.
					if (d - previousD == 1)
					{
						++consecutive;
						totalConsumption += c - previousC;
					}
				}

				// If It is the next month from previous.
				else if (m - previousM == 1 and d == 1)
				{
					// If previous date is 31-Jan and current 1-Feb.
					bool isNext = (previousM == 1 and previousD == 31);
					// If previous year is not leap and date is 28-Feb and current 1-Mar.
					isNext = isNext or (not isLeapYear(previousY) and previousM == 2 and previousD == 28);
					// If previous year is leap and date is 29-Feb and current 1-Mar.
					isNext = isNext or (isLeapYear(previousY) and previousM == 2 and previousD == 29);
					// If previous date is 31-Mar and current 1-Apr.
					isNext = isNext or (previousM == 3 and previousD == 31);
					// If previous date is 30-Apr and current 1-May.
					isNext = isNext or (previousM == 4 and previousD == 30);
					// If previous date is 31-May and current 1-Jun.
					isNext = isNext or (previousM == 5 and previousD == 31);
					// If previous date is 30-Jun and current 1-Jul.
					isNext = isNext or (previousM == 6 and previousD == 30);
					// If previous date is 31-Jul and current 1-Aug.
					isNext = isNext or (previousM == 7 and previousD == 31);
					// If previous date is 31-Aug and current 1-Sep.
					isNext = isNext or (previousM == 8 and previousD == 31);
					// If previous date is 30-Sep and current 1-Oct.
					isNext = isNext or (previousM == 9 and previousD == 30);
					// If previous date is 31-Oct and current 1-Nov.
					isNext = isNext or (previousM == 10 and previousD == 31);
					// If previous date is 30-Nov and current 1-Dec.
					isNext = isNext or (previousM == 11 and previousD == 30);

					if (isNext)
					{
						consecutive++;
						totalConsumption+=c - previousC;
					}
				}
			}

			previousD = d;
			previousM = m;
			previousY = y;
			previousC = c;
		}

		cout << consecutive << " " << totalConsumption << "\n";
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