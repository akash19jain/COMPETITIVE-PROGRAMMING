#include<bits/stdc++.h>
using namespace std;

struct String
{
	char s,c;
};

bool cmp(String A,String B)
{
	return A.c<=B.c;
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m;
		cin>>n>>m;
		string c,p;
		String S[n];
		for(int i=0;i<n;i++)
			cin>>S[i].s;
		for(int i=0;i<n;i++)
			cin>>S[i].c;
		cin>>p;
		int a[26]={0};
		int b[26]={0};
		int ans=1;

		for(int i=0;i<n;i++)
			a[S[i].s-'a']++;
		for(int i=0;i<p.length();i++)
			b[p[i]-'a']++;
		for(int i=0;i<26;i++)
		{
			if(b[i]>a[i])
			{
				ans=0;
				break;
			}
		}
		if(!ans)
		{
			cout<<"-1\n";
			continue;
		}
		ans=0;
		sort(S,S+n,cmp);
		for(int i=0;i<n;i++)
		{
			if(b[S[i].s-'a']>0)
			{
				ans=ans+S[i].c-'0';
				b[S[i].s-'a']--;

			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}