#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		queue<string> q;
		q.push("1");
		for (int i = 1; i <= n; i++) {
			string s1 = q.front();
			q.pop();
			cout << s1 << " ";
			q.push(s1 + '0');
			q.push(s1 + '1');
		}
		cout << endl;
	}
	return 0;
}