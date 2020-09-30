class Solution {
public:
	int titleToNumber(string s)
	{
		int n = s.length();
		int ans = 0;
		int c = 0;
		for (int i = n - 1; i >= 0; i--)
		{
			int x = s[i] - 'A';
			x++;
			int mul = pow(26, c);
			ans += x * mul;
			c++;
		}
		return ans;
	}
};