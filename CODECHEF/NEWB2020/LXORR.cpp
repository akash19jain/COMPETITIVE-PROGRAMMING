#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin >> t;
	while (t--)
	{
		long long int n;
		cin >> n;
		long long int sum = 0;
		for (long long int i = 0; i < n; i++)
		{
			sum = sum ^ (n - i);
		}

		cout << sum * 2 << endl;
	}
	return 0;
}
