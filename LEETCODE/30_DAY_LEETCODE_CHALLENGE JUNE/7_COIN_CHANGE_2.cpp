class Solution
{
public:
	int change(int a, vector<int>& cs)
	{
		vector<int>dp(a + 1, 0);
		dp[0] = 1;
		for (int i = 1; i <= cs.size(); i++)
		{
			for (int j = 1; j <= a; j++)
			{
				if (cs[i - 1] <= j)
					dp[j] += dp[j - cs[i - 1]];
			}
		}
		return dp[a];
	}
};