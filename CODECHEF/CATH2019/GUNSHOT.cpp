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
	long long n;
	cin>>n;
	long long a[n],sum=0;
	for(long long i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int ans=0;
	for(long long i=0;i<n-1;i++)
		sum+=a[i];
	
	if(a[n-1]<=sum && (sum+a[n-1])%2==0)
		ans=1;
	if(ans)
	{
		cout<<"YES\n";
	}
	else
		cout<<"NO\n";
	return 0;
}