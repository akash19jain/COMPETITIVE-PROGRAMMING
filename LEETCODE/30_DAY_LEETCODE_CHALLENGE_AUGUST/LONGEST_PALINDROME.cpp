class Solution {
public:
	int longestPalindrome(string s)
	{
		int count[26] = {0}, count1[26] = {0};
		int n = s.length();
		for (int i = 0; i < n; i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				int x = s[i] - 'a';
				count[x]++;
			}
			else
			{
				int x = s[i] - 'A';
				count1[x]++;
			}
		}

		int ans = 0;
		int f = 0;
		for (int i = 0; i < 26; i++)
		{
			if (count[i] % 2 == 0)
				ans += count[i];
			else
			{
				f = 1;
				ans += count[i] - 1;
			}
		}
		for (int i = 0; i < 26; i++)
		{
			if (count1[i] % 2 == 0)
				ans += count1[i];
			else
			{
				f = 1;
				ans += count1[i] - 1;
			}
		}
		if (f)
			ans++;
		return ans;
	}
};