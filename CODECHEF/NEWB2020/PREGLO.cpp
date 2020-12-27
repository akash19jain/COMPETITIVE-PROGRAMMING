#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		string s, a;
		long long int i, sum = 0, c = 0;
		double x = 0;
		cin >> s >> a;
		reverse(s.begin(), s.end());
		for (i = 5; i < s.size(); i++)
		{
			x += ((int)s[i] - 96) * (pow(26, c));
			c++;
		}
		sum = (long long int)x;
		cout << sum << endl;
		t--;
	}

	return 0;
}