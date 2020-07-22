//https://practice.geeksforgeeks.org/contest-problem/game-of-digits/1/

string smallestK(long long n)
{
	string ans = "";
	if (n < 10)
	{
		ans = n + '0';
		return ans;
	}
	stack<int> st;
	for (long long i = 9; i >= 2 && n > 1; i--)
	{
		while (n % i == 0)
		{
			st.push(i);
			n = n / i;
		}
	}
	if (n != 1)
	{
		ans = "-1";
		return ans;
	}

	while (!st.empty())
	{
		ans += st.top() + '0';
		st.pop();
	}
	return ans;

}