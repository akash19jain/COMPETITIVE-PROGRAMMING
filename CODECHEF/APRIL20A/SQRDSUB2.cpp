/*  AUTHOR: AKASH JAIN
*   EMAIL:  akash19jain@gmail.com
*   ID:     akash19jain  
*   DATE:   04-04-2020 19:29:32
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
    	SCA(arr,n);
    	ll ans=0;
    	vector<ll> odd;
    	ll c=0;
    	REP(i,n)
    	{
    		arr[i]=ABS(arr[i]);
    		if(arr[i]%2==1)
    		{
    			c++;
    		}
    		else
    		{
    			odd.push_back(c);
    			c=0;
    		}
    	}
    	odd.push_back(c);
    	REP(i,odd.size())
    	{
    		ll x=odd[i];
    		ans+=x*(x+1)/2;
    	}
    	// REP(i,n)
    	// {	
    	// 	ll pro=1;
    	// 	FOR(j,i,n-1)
    	// 	{
    	// 		pro*=arr[j];
    	// 		pro=ABS(pro);
    	// 		if(pro%4==0)
    	// 		{
    	// 			ans++;
    	// 			ans+=n-j-1;
    	// 			break;
    	// 		}
    	// 	}
    	// }

    	vector<pair<ll, ll> >pos;
    	pos.push_back(make_pair(-1,-1));
    	REP(i,n)
    	{
    		if(arr[i]%4==0)
    			pos.push_back(make_pair(i,-1));
    		else if(arr[i]%4==2)
    			pos.push_back(make_pair(i,1));
    	}
    	pos.push_back(make_pair(n,-1));

    	ll final=n*(n+1)/2;
    	//DEB(final);
    	final-=ans;
    	ll len=pos.size();
    	ll here=0;
    	REP(i,len)
    	{
    		if(i==0 || i==len-1)
    			continue;

    		if(pos[i].second==-1)
    			continue;
            ll y=pos[i+1].first-pos[i].first;
    		ll x=pos[i].first-pos[i-1].first;
    		
    		ll z=x*y;
    		here+=z;
    		//DEB(pos[i].first);

    	}
    	//DEB(here);
    	final-=here;
    	final+=ans;
    	PF1(final);
    	//PF1(ans);
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