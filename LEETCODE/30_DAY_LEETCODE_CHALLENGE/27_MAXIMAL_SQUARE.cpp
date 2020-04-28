class Solution {
public:
	int maximalSquare(vector<vector<char>>& matrix)
	{


		int m = matrix.size();
		if (m == 0)
			return 0;
		int n = matrix[0].size();

		int ans = 0;

		int dp[m][n];
		memset(dp, 0, sizeof(dp));
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == 0 || j == 0 || matrix[i][j] == '0')
				{
					dp[i][j] = matrix[i][j] - '0';
				}
				else
				{
					dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
				}
				ans = max(ans, dp[i][j]);
			}
		}
		return ans * ans;
	}
};