#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

long long power(long long a,long long b)
{
	long long res=1;
	if(b==0)
		return res;
	while(b>0)
	{
		if(b%2)
			res=(res*a);
		b/=2;
		a=(a*a);
	}
	return res;
}

int main()
{
	long long T;
	cin>>T;
	while(T--)
	{
		long long n,m;
		cin>>n>>m;
		long long a=(power(5,n)+power(7,n));
		long long b=(power(5,m)+power(7,m));
		long long ans=__gcd(a,b);
		cout<<ans<<"\n";
	}
	return 0;
}