#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

#define For(a,n) for(long long i=a;i<n;i++)
#define Rof(a,n) for(long long i=a;i>=n;i--)
#define Set(a, val)   memset(a,val,sizeof(a))

#define IMAX INT_MAX
#define LMAX LONG_MAX
#define LLMAX LONG_LONG_MAX
#define PI    3.1415926535897932384626433832795

#define DEB cout<<"Hi\n";
#define DEB1 cout<<"Hello\n";

#define Test long long T; cin>>T; while(T--)

typedef long long ll;

template <typename T> 
void Deb(T x)
{
	cout<<x<<" ";
}

template <typename T> 
void Deb1(T x)
{
	cout<<x<<"\n";
}

template <typename T> 
void output(T x[],long long size)
{
	for(long long i=0;i<size;i++)
		cout<<x[i]<<" ";
	cout<<"\n";
}

template <typename T> 
void input(T x[],long long size)
{
	for(long long i=0;i<size;i++)
		cin>>x[i];
}

long long power(long long a,long long b)
{
	long long ans=1;
	while(b>0)
	{
		if(b%2)
			ans=(ans*a)%MOD;
		a=(a*a)%MOD;
		b/=2;
	}
	return ans;
}

int main()
{
	long long n,m,k;
	cin>>n>>m>>k;
	long long ans=(n+m)/k;
	long long p=n%k,q=m%k;
	// p=p%k;
	// q=q%k;
	if(p!=0)
		p=k-p;
	if(q!=0)
		q=k-q;
	p=min(p,q);
	cout<<ans<<" "<<p<<"\n";
	return 0;
}