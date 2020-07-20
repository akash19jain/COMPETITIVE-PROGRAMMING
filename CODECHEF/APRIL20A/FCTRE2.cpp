//SOURCE : https://www.geeksforgeeks.org/print-the-path-between-any-two-nodes-of-a-tree-dfs/
//Print the path between any two nodes of a tree | DFS

//SOURCE : https://www.geeksforgeeks.org/efficient-program-print-number-factors-n-numbers/
//To calculate the number of factors
/*  AUTHOR: AKASH JAIN
*   EMAIL:  akash19jain@gmail.com
*   ID:     akash19jain  
*   DATE:   09-04-2020 13:44:08
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

  
// array to store prime factors 
ll factor[1100005] = { 0 }; 
ll cost[100005];
  
void generatePrimeFactors() 
{ 
    factor[1] = 1; 
    for (ll i = 2; i < 1100005; i++) 
        factor[i] = i; 
  
    for (ll i = 4; i < 1100005; i += 2) 
        factor[i] = 2; 
   
    for (ll i = 3; i * i < 1100005; i++) { 
        if (factor[i] == i) { 
            for (ll j = i * i; j < 1100005; j += i) { 
                if (factor[j] == j) 
                    factor[j] = i; 
            } 
        } 
    } 
}
void printanswer(vector<ll> st)
{
            ll n1=st.size();
            //DEB(st.size());
            //DEB(n1);
            map<ll,ll> mp;
            map<ll, ll>::iterator itr;
            mp.clear();
            REP(i,n1)
            {
                ll x=cost[st[i]];
                //DEB(x);
                while(x!=1)
                {
                    ll z=factor[x];
                    mp[z]++;
                    //DEB(mp[z]);
                    x=x/factor[x];
                }
            }
            ll ans=1;
            for (itr = mp.begin(); itr != mp.end(); ++itr)
            {
                ll y=(itr->second)+1;
                ans=(ans%MOD)*(y%MOD);
                ans=ans%MOD;
                //cout<<itr->first<<" "<<itr->second<<"\n";
            }
            PF1(ans);
}
void DFS(vector<ll> v[],bool vis[],ll x,ll y,vector<ll> st,ll ansflag)
{
    st.push_back(x);
    //DEB(x);
    if(x==y)
    {
        ansflag=1;
        printanswer(st);
        return;
    }
    vis[x]=true;

    ll flag=0;
    if(!v[x].empty())
    {
        for(ll j=0;j<v[x].size();j++)
        {
            if(vis[v[x][j]] == false)
            {
                DFS(v,vis,v[x][j],y,st,ansflag);
                flag=1;
            }
        }
    }
    if(flag==0)
        st.pop_back();
        
    return;
}

void DFSCall(ll x,ll y,vector<ll> v[],ll n,vector<ll> st)
{
    ll ansflag=0;
    bool vis[n+2];
    memset(vis,false,sizeof(vis));

    DFS(v,vis,x,y,st,ansflag);
    return;
}
int main()
{
    
 
    generatePrimeFactors(); 
    
    CASES
    {
        ll n;
        SC1(n);
        vector<ll> v[n+1];
        REP(i,n-1)
        {
            ll x,y;
            SC2(x,y);
            v[x].push_back(y);
            v[y].push_back(x);
            //DEB(v[x].size());
            //DEB(v[y].size());
        }
        FOR(i,1,n)
            SC1(cost[i]);
        ll q;
        SC1(q);
        ll aa=1;
        while(q--)
        {
            ll x1,y1;
            SC2(x1,y1);
            vector<ll> st;
            //DEB(st.size());
            //printf("%lld= ",aa);
            DFSCall(x1,y1,v,n,st);
            aa++;
            
            // DEB(x1);
            // DEB(y1);
        }
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