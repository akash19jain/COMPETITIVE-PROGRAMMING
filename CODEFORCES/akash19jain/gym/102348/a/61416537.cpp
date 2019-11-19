#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,k,l,n;
	cin>>a>>b>>k>>l>>n;
	int x,y;
	int p=a*(k-1)+b*(l-1);
	if(n>p)
	{
		x=n-p;
	}
	if(k<=l)
	{
		p=a*k;
		if(p<=n)
		{
			y=a;
			n-=p;
			p=n/l;
			if(p>b)
				p=b;
			y=y+p;
		}
		else
		{
			p=n/k;
			y=p;
		}
	}
	else
	{
		p=b*l;
		if(p<=n)
		{
			y=b;
			n-=p;
			p=n/k;
			if(p>a)
				p=a;
			y=y+p;
		}
		else
		{
			p=n/l;
			y=p;	
		}
	}
	cout<<x<<" "<<y<<"\n";
	return 0;
}