#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n, k, m;

		cin >> n >> k >> m;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a , a + n);
		for (int i = n - 1 ; i >= 0 ; i--)
		{
			if (a[i] * k <= m)
			{
				cout << a[i] << endl;
				break;
			}

		}

	}
	return 0;
}
