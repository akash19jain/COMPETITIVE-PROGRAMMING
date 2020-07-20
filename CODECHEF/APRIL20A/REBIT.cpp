/*  AUTHOR: AKASH JAIN
*   EMAIL:  akash19jain@gmail.com
*   ID:     akash19jain  
*   DATE:   11-04-2020 15:41:07
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

ll values[50005][3];
vector<ll> st;
ll x=0;

ll mul(ll x,ll p)
{
	x=x * p % FMOD;
	if(x<0)
		x+=FMOD;
	return x;

}
ll invpow(ll a,ll p)
{
	if(p==0)
		return 1;
	ll ans=invpow(a,p/2);
	ans=ans*ans%FMOD;
	if((p & 1)==1)
		ans=ans * a % FMOD;

	return ans;
}
ll solve(ll a1,ll a2,ll a3)
{
	ll ca1=values[a1][0]+values[a1][1]+values[a1][2]+values[a1][2];
	ll ca2=values[a2][0]+values[a2][1]+values[a2][2]+values[a2][2];

	if(a3==-1) // &
	{
		values[x][0]=values[a1][0]*ca2%FMOD + ca1*values[a2][0] %FMOD - (values[a1][0]*values[a2][0]) + values[a1][2] * values[a2][2] * 2 %FMOD;
		values[x][1]=values[a1][1]*values[a2][1];
		values[x][2]=values[a1][2] * values[a2][2] % FMOD + values[a1][2] * values[a2][1] % FMOD + values[a1][1] * values[a2][2];
		values[x][0]%=FMOD;
		values[x][2]%=FMOD;
		values[x][1]%=FMOD;
	}
	else if(a3==-3)	// ^
	{
		values[x][0]=values[a1][0] * values[a2][0] % FMOD + values[a1][1] * values[a2][1] % FMOD + values[a1][2] * values[a2][2] * 2 %FMOD;
		values[x][1]=values[a1][0] * values[a2][1] % FMOD + values[a1][1] * values[a2][0] % FMOD + values[a1][2] * values[a2][2] * 2 %FMOD;
		values[x][2]=values[a1][1] * values[a2][2] % FMOD + values[a1][2] * values[a2][1] % FMOD + values[a1][2] * values[a2][0] %FMOD + values[a1][0] * values[a2][2] % FMOD;
		values[x][0]%=FMOD;
		values[x][2]%=FMOD;
		values[x][1]%=FMOD;
	}
	else if(a3==-2)	// |
	{
		values[x][0]=values[a1][0]*values[a2][0];
		values[x][1]=values[a1][1]*ca2%FMOD + ca1*values[a2][1] %FMOD - (values[a1][1]*values[a2][1]) + values[a1][2] * values[a2][2] * 2 %FMOD;
		values[x][2]=values[a1][2] * values[a2][2] % FMOD + values[a1][2] * values[a2][0] % FMOD + values[a1][0] * values[a2][2];
		values[x][0]%=FMOD;
		values[x][2]%=FMOD;
		values[x][1]%=FMOD;
	}
	return x;
	
}
ll postfix (string s,ll n,ll total)
{
	REP(i,n)
	{
		if(s[i]=='#')
		{
		    st.push_back(x);
		    x++;
		    total=x;
		}
		else if(s[i]==')')
		{
			ll a1=st[st.size()-1];
			ll a3=st[st.size()-2];
			ll a2=st[st.size()-3];
			st.pop_back();
			st.pop_back();
			st.pop_back();
			
			st.pop_back();
// 			DEB(a1);
// 			DEB(a2);
// 			DEB(a3);
			ll result=solve(a1,a2,a3);
			st.push_back(x);
			x++;
			total++;
		}
		else if(s[i]=='&')
		{
			st.push_back(-1);
		}
		else if(s[i]=='|')
		{
			st.push_back(-2);
		}
		else if(s[i]=='^')
		{
			st.push_back(-3);
		}
		else if(s[i]=='(')
		{
			st.push_back(-4);
		}
		total--;
		
	}
	ll aaa=st[st.size()-1];
	st.pop_back();
	return aaa;
}
int main()
{
    CASES
    {
        x=0;
    	REP(i,50005)
    	{
    		values[i][0]=1;
    		values[i][1]=1;
    		values[i][2]=1;
    	}
    	string s;
    	cin>>s;
    	ll n=s.size();
    	ll total=0;
    	//cout<<n<<"\n";
    // 	REP(i,n)
    // 	    cout<<s[i]<<"\n";
    	ll ans=postfix(s,n,total);

    	ll sum=values[ans][0]+values[ans][1]+values[ans][2]+values[ans][2];
        total++;
    	ll p=invpow(sum,FMOD-2);
    	ll a1=mul(values[ans][0],p);
    	ll a2=mul(values[ans][1],p);
    	ll a3=mul(values[ans][2],p);
        if(total<0)
        {
            // PFS("ERROR");
        }
            
    	cout<<a1<<" "<<a2<<" "<<a3<<" "<<a3<<"\n";

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